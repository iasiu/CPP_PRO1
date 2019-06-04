#pragma once
#include <vector>
#include "PojazdyPowietrzne.hpp"
#include "Silnik.hpp"
#include "Akumulator.hpp"
#include "Obudowa.hpp"
#include <vector>

using namespace std;
///Klasa pochodna klasy PojazdyPowietrzne
class Dron : public PojazdyPowietrzne
{
private:
    ///Pole statyczne przechowujace liczbe istniejacych obiektow klasy
    static int licznikDron;
    ///Pole przechowujace ilosc silnikow
    int iloscSilnikow;
    ///Funkcja wirtualna wywolywana w operatorze strumieniowym klasy Dron opisuje ktore pola i w jakiej kolejnosci sie wypisza
    virtual void wypiszDane(std::ostream &output) const
    {
        output << id << "\n";
        output << waga <<"\n";
        output << onOff <<"\n";
        output << iloscSmigiel<<"\n";
        output << iloscSilnikow;
    }
    ///Funkcja wirtualna wywolywana w operatorze strumieniowym klasy Dron opisuje ktore pola i w jakiej kolejnosci sie wczytaja
    virtual void czytajDane(std::istream &input)
    {
        input >> id >> waga >> onOff >> iloscSmigiel >> iloscSilnikow;
    }
    ///Pole typu wektor przechowujace wskazniki na typ Silnik
    vector<Silnik *> wekt;
    ///Pole dynamiczne przechowujace akumulator
    Akumulator *akumulator;
    ///Pole przechowujace obudowe
    Obudowa obudowa;
    ///Pole przechowujace informacje o tym czy istnieje akumulator
    bool check_akm=0;

public:
    ///Konstruktor z parametrami usawiajacy domyslnie wartosci na 0
    Dron(int=0, bool=0, int=0, int=0);
    ///Konstrukto kopiujacy
    Dron(const Dron &);
    ///Destruktor
    ~Dron();
    ///Metoda zwracajaca ilosc silnikow
    int get_iloscSilnikow();
    ///Metoda ustawiajaca ilosc silnikow
    void set_iloscSilnikow(int);
    ///Metoda zwracaja stan obiektu
    std::string getOn_off();
    ///Metoda zwracajaca check_akm
    bool checkakm();
    ///Metoda wypisujaca dane silnikow
    void wypisz_dane_silnikow();
    ///Metoda zmieniajaca stan silnikow
    void wlacz_wylacz_silniki();
    ///Metoda pobierajaca energie z akumulatora
    void polec_1km();
    ///Metoda tworzaca istancje akumulatora dynamicznie
    void wloz(Akumulator*);
    ///Metoda usuwajaca istancje akumulatora
    void wyjmij();
    ///Metoda zmieniajaca kolor obudowy
    void zmien_kolor();
    ///Metoda wypisujaca wage obiektu
    void wypisz_wage();
    ///Metoda wypisujaca dane obiekti
    void wypisz_dane();
    ///Metoda statyczna zwracajaca licznik
    static int get_licznik();
    ///Metoda wypisujaca do jakiej klasy nalezy obiekt
    void przedstaw_sie();
    ///Metoda zwracajaca std::string zawierajacy informacje do jakiej klasy nalezy obiekt
    std::string wypiszsie();
    ///Metoda sluzaca do dodawania do wektora wskaznika na obiekt typu Silnik
    void puszbek();
};

