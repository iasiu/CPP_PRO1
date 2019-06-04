#pragma once
#include "Pojazdy.hpp"
///Klasa pochodna klasy bazowej Pojazdy
class PojazdyPowietrzne : public Pojazdy
{
private:
    ///Funkcja wirtualna wywolywana w operatorze strumieniowym klasy PojazdyPowietrzne opisuje ktore pola i w jakiej kolejnosci sie wypisza
    virtual void wypiszDane(std::ostream &output) const
    {
        output << id << "\n";
        output << waga <<"\n";
        output << onOff <<"\n";
        output << iloscSmigiel;
    }
protected:
    ///Pole przechowujace ilosc istniejacych obiektow klasy PojazdyPowietrzne dziedziczone do klasy Dron
    static int licznikPojazdyPowietrzne;
    ///Pole przechowujace ilosc smiegiel klasy PojazdyPowietrzne dziedziczone do klasy Dron
    int iloscSmigiel;
    
    ///Funkcja wirtualna wywolywana w operatorze strumieniowym klasy PojazdyPowietrzne opisuje ktore wartosci sa wczytywane i w jakiej kolejnosci do pol klasy
    virtual void czytajDane(std::istream &input)
    {
        input >> id >> waga >> onOff >> iloscSmigiel;
    }
public:
    ///Konstruktor klasy PojazdyPowietrzne z argumentami i domyslnie ustawiajacy wartosci na 0
    PojazdyPowietrzne(int=0, bool=0, int=0);
    ///Destruktor wirtualny
    virtual ~PojazdyPowietrzne();
    ///Metoda wirtualna zwracajaca ilosc smigiel dziedzioczna do klasy pochodnej
    virtual int get_iloscSmigiel();
    ///Metoda wirtualna ustawiajaca ilosc smiegiel dziedziczona do klasy pochodnej
    virtual void set_iloscSmiegiel(int);
    ///Metoda statyczna zwracajaca licznik
    static int get_licznik();
    ///Metoda wirtualna wypisujaca do jakiej klasy nalezy obiekt dziedziczona do klas pochodnych
    virtual void przedstaw_sie();
    ///Metoda wirtualna zwracajaca std::string zawierajacy informacje do jakiej klasy nalezy obiekt dziedziczona do klas pochodnych
    virtual std::string wypiszsie();
};
