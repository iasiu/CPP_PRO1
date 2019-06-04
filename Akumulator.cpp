#include "Akumulator.hpp"

static int licznik;

using namespace std;

//KONSTRUKTOR
Akumulator::Akumulator()
{
    static int k=1;
    stan=100;
    waga=15;
    this->id=k++;
    licznik++;
    static int l=1;
    cout<<"Wywolano konstruktor akumulatora poraz "<<l++<<endl;
    
}

//DESTRUKTOR
Akumulator::~Akumulator()
{
    licznik--;
    static int m=1;
    cout<<"Wywolano destruktor akumulatora poraz "<<m++<<endl;
}

//WAGA POBIERZ
unsigned int Akumulator::getWaga()
{
    return waga;
}

//WAGA USTAW
void Akumulator::setWaga(unsigned int w)
{
    waga = w;
}

//ID POBIERZ
int Akumulator::getId()
{
    return id;
}

//ID USTAW
void Akumulator::setId(int i)
{
    id = i;
}

//STANPOBIERZ
unsigned int Akumulator::getStan()
{
    return stan;
}

//STAN USTAW
void Akumulator::setStan(unsigned int s)
{
    stan = s;
}

