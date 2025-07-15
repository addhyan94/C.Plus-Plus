#include <iostream>
#include <string>
#include <curl/curl.h>
#include <jsoncpp/json/json.h>

using namespace std;

// Function to send HTTP POST request to the OpenAI API
string send_post_request(const string& api_key, const string& prompt) {
    CURL* curl;
    CURLcode res;
    string response;

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    if (!curl) {
        cerr << "Failed to initialize CURL" << endl;
        curl_global_cleanup();
        return "";
    }

    // Set the URL and headers
    string url = "https://api.openai.com/v1/images/generations";
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_slist* headers = nullptr;
    headers = curl_slist_append(headers, "Content-Type: application/json");
    headers = curl_slist_append(headers, ("Authorization: Bearer " + api_key).c_str());
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

    // Set the POST data
    Json::Value data;
    data["prompt"] = prompt;
    data["n"] = 1;
    data["size"] = "1024x1024";
    data["response_format"] = "url";
    string post_data = data.toStyledString();
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, post_data.c_str());

    // Write the response to a string
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, [](void* contents, size_t size, size_t nmemb, void* userp) {
        static_cast<string*>(userp)->append(static_cast<char*>(contents), size * nmemb);
        return size * nmemb;
    });
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

    // Perform the request
    res = curl_easy_perform(curl);
    if (res != CURLE_OK) {
        cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << endl;
    }

    // Cleanup
    curl_easy_cleanup(curl);
    curl_slist_free_all(headers);
    curl_global_cleanup();

    return response;
}

// Function to parse the response and extract the image URL
string parse_response(const string& response) {
    Json::Value root;
    Json::Reader reader;
    bool parsingSuccessful = reader.parse(response, root);

    if (!parsingSuccessful) {
        cerr << "Failed to parse the response" << endl;
        return "";
    }

    if (!root.isMember("data") || !root["data"].isArray() || root["data"].empty() || 
        !root["data"][0].isMember("url")) {
        cerr << "Unexpected JSON structure" << endl;
        return "";
    }

    return root["data"][0]["url"].asString();
}

int main() {
    string api_key;
    cout << "Enter your API key: ";
    cin >> api_key;

    string prompt = "A beautiful sunset over a beach with palm trees";

    string response = send_post_request(api_key, prompt);
    if (response.empty()) {
        cerr << "Failed to get a response from the API." << endl;
        return 1;
    }

    string image_url = parse_response(response);
    if (!image_url.empty()) {
        cout << "Generated image URL: " << image_url << endl;
    } else {
        cerr << "Failed to generate the image." << endl;
    }

    return 0;
}