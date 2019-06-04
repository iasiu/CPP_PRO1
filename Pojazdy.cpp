#include "Pojazdy.hpp"

Pojazdy::Pojazdy(int waga, bool onOff)
{
    licznikPojazdy++;
    this->id=licznikPojazdy;
    this->waga = waga;
    this->onOff = onOff;
    std::cout<<"Wywolano konstruktor klasy Pojazdy"<<std::endl;
}

Pojazdy::~Pojazdy()
{
    licznikPojazdy--;
    std::cout<<"Wywolano destruktor klasy Pojazdy"<<std::endl;
}

int Pojazdy::get_waga()
{
    return this->waga;
}

void Pojazdy::set_waga(int waga)
{
    this->waga = waga;
}

bool Pojazdy::get_onOff()
{
    return this->onOff;
}

void Pojazdy::set_onOff(bool onOff)
{
    this->onOff = onOff;
}

std::ostream &operator<<( std::ostream &output, const Pojazdy &p ) {
    p.wypiszDane(output);
    return output;
}

std::istream &operator>>( std::istream  &input, Pojazdy &p ) {
    p.czytajDane(input);
    return input;
    }

int Pojazdy::get_id()
{
    return this->id;
}

int Pojazdy::get_licznik()
{
    return licznikPojazdy;
}

int Pojazdy::licznikPojazdy = 0;

void Pojazdy::przedstaw_sie()
{
    std::cout<<"Jestem z klasy Pojazdy"<<std::endl;
}

std::string Pojazdy::wypiszsie()
{
    return "Jestem z klasy Pojazdy";
}

int Pojazdy::get_iloscSilnikow()
{
    return 1;
}

void Pojazdy::puszbek()
{
    std::cout<<"Brak wektora"<<std::endl;
}
