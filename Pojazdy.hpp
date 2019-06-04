#pragma once
#include <iostream>
#include "Silnik.hpp"
///Klasa bazowa projektu
class Pojazdy
{
private:
    ///Funkcja wirtualna wywolywana w operatorze strumieniowym klasy bazowej opisuje ktore pola i w jakiej kolejnosci sie wypisza
    virtual void wypiszDane(std::ostream &output) const
    {
        output << id << "\n";
        output << waga <<"\n";
        output << onOff ;
    }
protected:
    ///Pole przechowujace ilosc istniejacych obiektow klasy Pojazd
    static int licznikPojazdy;
    ///Pole przechowujace id obiektu
    int id;
    ///Pole przechowujace wage obiektu
    int waga;
    ///Pole przechowujace stan obiektu
    bool onOff;
    
    int nowa_zm;
    
    ///Funkcja wirtualna wywolywana w operatorze strumieniowym klasy bazowej opisuje ktore wartosci sa wczytywane i w jakiej kolejnosci do pol klasy
    virtual void czytajDane(std::istream &input)
    {
        input >> id >> waga >> onOff;
    }
public:
    ///Konstrukto klasy bazowej z argumentami i domyslnie ustawiajacy wartosci na 0
    Pojazdy(int=0, bool=0);
    ///Wirtualny destruktor klasy bazowej
    virtual ~Pojazdy();
    ///Metoda wirtualna zwracajaca wage obiektu dziedziczona do klas pochodnych
    virtual int get_waga();
    ///Metoda wirtualna ustawiajace wage obiektu dziedziczona do klas pochodnych
    virtual void set_waga(int);
    ///Metoda wirtualna zwracajaca stan obiektu dziedziczona do klas pochodnych
    virtual bool get_onOff();
    ///Metoda wirtualna ustawiajaca stan obiektu dziedziczona do klas pochodnych
    virtual void set_onOff(bool);
    ///Operator strumieniowy out klasy bazowej dziedziczony do klas pochodnych
    friend std::ostream &operator<<(std::ostream &output, const Pojazdy &p);
    ///Operator strumieniowy in klasy bazowej dziedziczony do klas pochodnych
    friend std::istream &operator>>(std::istream  &input, Pojazdy &p);
    ///Metoda wirtualna zwracajaca ID obiektu dziedziczona do klas pochodnych
    virtual int get_id();
    ///Metoda statyczna zwracajaca licznik obiektu klasy bazowej dziedziczona do klas pochodnych
    static int get_licznik();
    ///Metoda wirtualna wypisujaca do jakiej klasy nalezy obiekt dziedziczona do klas pochodnych
    virtual void przedstaw_sie();
    ///Metoda wirtualna zwracajaca std::string zawierajacy informacje do jakiej klasy nalezy obiekt dziedziczona do klas pochodnych
    virtual std::string wypiszsie();
    ///Metoda wirtualna zwracajaca ilosc silnikow obiektu dziedziczona do klas pochodnych
    virtual int get_iloscSilnikow();
    ///Metoda wirtualna sluzaca do dodawania do wektora wskaznika na obiekt dziedziczona do klas pochodnych
    virtual void puszbek();
};
