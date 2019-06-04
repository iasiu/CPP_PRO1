#include "Obudowa.hpp"

static int licznik;

using namespace std;

//KONSTRUKTOR
Obudowa::Obudowa()
{
    licznik++;
    static int a=1;
    kolor="Czarny";
    waga=5;
    this->id=a++;
    static int b=1;
    cout<<"Wywolano konstruktor obudowy poraz "<<b++<<endl;
}

//DESTRUKTOR
Obudowa::~Obudowa()
{
    licznik--;
    static int b=1;
    cout<<"Wywolano destruktor obudowy poraz "<<b++<<endl;
}

//WAGA POBIERZ
unsigned int Obudowa::getWaga()
{
    return waga;
}

//WAGA USTAW
void Obudowa::setWaga(unsigned int w)
{
    waga = w;
}

//ID POBIERZ
int Obudowa::getId()
{
    return id;
}

//ID USTAW
void Obudowa::setId(int i)
{
    id = i;
}

//KOLOR POBIERZ
string Obudowa::getKolor()
{
    return kolor;
}


//KOLOR USTAW
void Obudowa::setKolor(string k)
{
    kolor = k;
}
