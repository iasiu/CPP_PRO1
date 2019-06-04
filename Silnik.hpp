#pragma once
#include <iostream>
#include <string>

using namespace std;

class Silnik
{
private:
    unsigned int waga;
    int id;
    bool on_off;
public:
    Silnik();
    ~Silnik();
    
    Silnik(int);
    
    Silnik(const Silnik &);
    
    unsigned int getWaga();
    void setWaga(unsigned int);
    
    int getId();
    void setId(int);
    
    string getOn_off();
    void setOn_off(bool);
    
    //OPERATORY
    Silnik operator +(const Silnik &);
    Silnik operator -(const Silnik &);
    Silnik operator +=(const Silnik &);
    Silnik operator -=(const Silnik &);
    bool operator ==(const Silnik &);
    bool operator !=(const Silnik &);
    bool operator >(const Silnik &);
    bool operator <(const Silnik &);
    bool operator >=(const Silnik &);
    bool operator <=(const Silnik &);
    Silnik& operator ++(int);
    Silnik& operator --(int);
    friend ostream& operator <<(ostream &, const Silnik &);
    unsigned int & operator[](const int index);
    operator float();
};

