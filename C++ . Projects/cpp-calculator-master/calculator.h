#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <array>
#include <cmath>

class Calculator
{
public:
    Calculator();           
    virtual ~Calculator() = default;  
    void add();          
    void subtract();
    void multiply();
    void divide();
    void square();
    void sqrt();
    void setMem();         
    void printMem() const;

    double parseInput(const std::string&) const;

    virtual void welcome() const;

    virtual void parseOperation(const std::string&);

/// protected so derived class can access.
protected:
    double result;      
    double mem;        
};

#endif
