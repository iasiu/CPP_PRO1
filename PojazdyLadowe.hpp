#pragma once
#include "Pojazdy.hpp"
///Klasa pochodna klasy bazowej Pojazdy
class PojazdyLadowe : public Pojazdy
{
private:
    ///Pole statyczne przechowujace ilosc istniejacych obiektow
    static int licznikPojazdyLadowe;
    ///Pole przechowujace ilosc kol
    int iloscKol;
    ///Funkcja wirtualna wywolywana w operatorze strumieniowym klasy PojazdyLadowe opisuje ktore pola i w jakiej kolejnosci sie wypisza
    virtual void wypiszDane(std::ostream &output) const
    {
        output << id << "\n";
        output << waga <<"\n";
        output << onOff <<"\n";
        output << iloscKol;
    }
    ///Funkcja wirtualna wywolywana w operatorze strumieniowym klasy PojazdyLadowe opisuje ktore pola i w jakiej kolejnosci sie wczytaja
    virtual void czytajDane(std::istream &input)
    {
        input >> id >> waga >> onOff >> iloscKol;
    }
public:
    ///Konstruktor z parametrami ustawiajacy domyslnie wartosci na 0
    PojazdyLadowe(int=0, bool=0, int=0);
    ///Destruktor wirtualny
    virtual ~PojazdyLadowe();
    ///Metoda wirtualna zwracajaca ilosc kol
    virtual int get_iloscKol();
    ///Metoda wirtualna ustawiajaca ilosc kol
    virtual void set_iloscKol(int);
    ///Metoda statyczna zwracajaca licznik
    static int get_licznik();
    ///Metoda wirtualna wypisujaca do jakiej klasy nalezy obiekt
    virtual void przedstaw_sie();
    ///Metoda wirtualna zwracajaca std::string zawierajacy informacje do jakiej klasy nalezy obiekt
    virtual std::string wypiszsie();
};
