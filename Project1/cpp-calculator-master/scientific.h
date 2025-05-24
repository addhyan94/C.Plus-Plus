#ifndef SCIENTIFIC_H
#define SCIENTIFIC_H


#include <string>
#include <array>
#include <cmath>
#include "calculator.h"

class Scientific : public Calculator
{
public:
    Scientific();      
    virtual ~Scientific() = default; 
    virtual void welcome() const override;        
    virtual void parseOperation(const std::string& input) override; 
    void sin();
    void cos();
    void tan();
    void ln();
    void log();
    void abs();
    void pow();
};

#endif 
