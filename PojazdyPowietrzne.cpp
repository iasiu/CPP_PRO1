#include "PojazdyPowietrzne.hpp"

PojazdyPowietrzne::PojazdyPowietrzne(int waga, bool onOff, int iloscSmigiel) : Pojazdy(waga, onOff)
{
    licznikPojazdyPowietrzne++;
    this->id = licznikPojazdyPowietrzne;
    this->iloscSmigiel = iloscSmigiel;
    std::cout<<"Wywolano konstruktor klasy PojazdyPowietrzne"<<std::endl;
}

PojazdyPowietrzne::~PojazdyPowietrzne()
{
    licznikPojazdyPowietrzne--;
    std::cout<<"Wywolano destruktor klasy PojazdyPowietrzne"<<std::endl;
}

int PojazdyPowietrzne::get_iloscSmigiel()
{
    return this->iloscSmigiel;
}

void PojazdyPowietrzne::set_iloscSmiegiel(int iloscSmigiel)
{
    this->iloscSmigiel = iloscSmigiel;
}

int PojazdyPowietrzne::get_licznik()
{
    return licznikPojazdy;
}

int PojazdyPowietrzne::licznikPojazdyPowietrzne = 0;

void PojazdyPowietrzne::przedstaw_sie()
{
    std::cout<<"Jestem z klasy PojazdyPowietrzne"<<std::endl;
}

std::string PojazdyPowietrzne::wypiszsie()
{
    return "Jestem z klasy PojazdyPowietrzne";
}
