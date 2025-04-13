// WAp to create a class shape which has 2D create a another class Cylinder which  inheritance  Proparty of class shapee calculate the area of Cylinder. 

#include<iostream>
using namespace std;

class shape{
protected:
int r,h;
public:
void getdata(){
    cout<<"Enter the R and H : ";
    cin>>r>>h;
}
};

class Cylinder : public shape{
    public:
    void calarea(){
    cout<<"Area of Cylinder : "<<(3.14*r*r*h)<<endl;
    }
};

int main(){
    Cylinder c1;
    c1.getdata();
    c1.calarea();
}

/*Output--> 
Enter the R and H : 8
                    9
Area of Cylinder : 1808.64
*/  