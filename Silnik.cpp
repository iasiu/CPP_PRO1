#include "Silnik.hpp"

using namespace std;

static int licznik=0;

//KONSTRUKTOR Z PARAMETRAMI
Silnik::Silnik(int w)
{
    waga=w;
    licznik++;
    static int i=1;
     cout<<"Wywolano konstruktor silnika poraz "<< i++ <<endl;
}

//KONSTRUKTOR
Silnik::Silnik()
{
    on_off=0;
    waga=10;
    licznik++;
    static int j=1;
    cout<<"Wywolano konstruktor silnika poraz "<< j++ <<endl;
}

//KONSTRUKTOR KOPIUJACY
Silnik::Silnik(const Silnik & obj)
{
    this->waga = obj.waga;
    this->id = obj.id;
    this->on_off = obj.on_off;
}

//DESTRUKTOR
Silnik::~Silnik()
{
    licznik--;
    static int j=1;
    cout<<"Wywolano destruktor silnika poraz "<<j++<<endl;
}

//WAGA POBIERZ
unsigned int Silnik::getWaga()
{
    return waga;
}

//WAGA USTAW
void Silnik::setWaga(unsigned int w)
{
    waga = w;
}

//NAZWA POBIERZ
int Silnik::getId()
{
    return id;
}

//NAZWA USTAW
void Silnik::setId(int i)
{
    id = i;
}

//ON/OFF POBIERZ
string Silnik::getOn_off()
{
    if(on_off==false) return "OFF";
    else return "ON";
}


//ON/OFF USTAW
void Silnik::setOn_off(bool o)
{
    on_off = o;
}

//OPERATORY

Silnik Silnik::operator +(const Silnik & s1)
{
    Silnik s;
    s.waga = waga + s1.waga;
    return s;
}
Silnik Silnik::operator -(const Silnik & s1)
{
    Silnik s;
    if(s1.waga>waga) s.waga = 0;
    else s.waga = waga - s1.waga;
    return s;
}
Silnik Silnik::operator +=(const Silnik & s1)
{
    Silnik s;
    s.waga = s1.waga + waga;
    return s;
}
Silnik Silnik::operator -=(const Silnik & s1)
{
    Silnik s;
    if(s1.waga>waga) s.waga = 0;
    else s.waga = waga - s1.waga;
    return s;
}
bool Silnik::operator ==(const Silnik & s1)
{
    if(s1.waga == waga && s1.on_off == on_off) return true;
    else return false;
}
bool Silnik::operator !=(const Silnik & s1)
{
    return(!(*this==s1));
}
bool Silnik::operator >(const Silnik & s1)
{
    if(waga > s1.waga) return true;
    else return false;
}
bool Silnik::operator <(const Silnik & s1)
{
    if(waga < s1.waga) return true;
    else return false;
}
bool Silnik::operator >=(const Silnik & s1)
{
    return(!(*this<s1));
}
bool Silnik::operator <=(const Silnik & s1)
{
    return(!(*this>s1));
}
Silnik& Silnik::operator ++(int)
{
    waga++;
    return *this;
}
Silnik& Silnik::operator --(int)
{
    waga--;
    return *this;
}
ostream& operator <<(ostream &stream, const Silnik &s1)
{
    cout<<s1.waga;
    return stream;
}

Silnik::operator float() //operator konwersji z kg na tony
{
    return waga * 0.001;
}
