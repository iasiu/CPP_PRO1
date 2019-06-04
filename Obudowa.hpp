#pragma once
#include <iostream>
#include <string>

using namespace std;

class Obudowa
{
private:
    unsigned int waga;
    int id;
    string kolor;
public:
    Obudowa();
    ~Obudowa();
    
    unsigned int getWaga();
    void setWaga(unsigned int);
    
    int getId();
    void setId(int);
    
    string getKolor();
    void setKolor(string);
};

