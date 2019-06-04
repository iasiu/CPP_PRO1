#include "PojazdyLadowe.hpp"

PojazdyLadowe::PojazdyLadowe(int waga, bool onOff, int iloscKol) : Pojazdy(waga, onOff)
{
    licznikPojazdyLadowe++;
    this->id = licznikPojazdyLadowe;
    this->iloscKol = iloscKol;
    std::cout<<"Wywolano konstruktor klasy PojazdyLadowe"<<std::endl;
}

PojazdyLadowe::~PojazdyLadowe()
{
    licznikPojazdyLadowe--;
    std::cout<<"Wywolano destruktor klasy PojazdyLadowe"<<std::endl;
}

int PojazdyLadowe::get_iloscKol()
{
    return this->iloscKol;
}

void PojazdyLadowe::set_iloscKol(int iloscKol)
{
    this->iloscKol = iloscKol;
}

int PojazdyLadowe::get_licznik()
{
    return licznikPojazdyLadowe;
}

int PojazdyLadowe::licznikPojazdyLadowe = 0;

void PojazdyLadowe::przedstaw_sie()
{
    std::cout<<"Jestem z klasy PojazdyLadowe"<<std::endl;
}

std::string PojazdyLadowe::wypiszsie()
{
    return "Jestem z klasy PojazdyLadowe";
}

