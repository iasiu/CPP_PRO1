#pragma once
#include <iostream>
#include <string>

using namespace std;

class Akumulator
{
private:
    unsigned int waga;
    unsigned int stan;
    int id;
public:
    Akumulator();
    ~Akumulator();
    
    unsigned int getWaga();
    void setWaga(unsigned int);
    
    int getId();
    void setId(int);
    
    unsigned int getStan();
    void setStan(unsigned int);
};
