#include "Dron.hpp"

Dron::Dron(int waga, bool onOff, int iloscSmigiel, int iloscSilnikow) : PojazdyPowietrzne(waga, onOff, iloscSmigiel)
{
    this->iloscSilnikow = iloscSilnikow;
    licznikDron++;
    this->id=licznikDron;
    static int i=1;
    std::cout<<"Wywolano konstruktor klasy Dron poraz "<<i++<<std::endl;
}

Dron::Dron(const Dron & obj) : PojazdyPowietrzne(obj)
{
    if(akumulator!=NULL)
    {
    this->akumulator = new Akumulator(*(obj.akumulator));
    }
    this->obudowa = obj.obudowa;
    this->wekt = obj.wekt;
    this->onOff = obj.onOff;
    this->check_akm = obj.check_akm;
    this->id = obj.id;
}


Dron::~Dron()
{
    if(checkakm())
    {
        delete this->akumulator;
    }
    licznikDron--;
    static int j=1;
    std::cout<<"Wywolano destruktor klasy Dron poraz "<<j++<<std::endl;
    
    for (vector<Silnik *>::iterator pObj = wekt.begin();
         pObj != wekt.end(); ++pObj) {
        delete *pObj;
    }
    wekt.clear();
}

int Dron::get_iloscSilnikow()
{
    return this->iloscSilnikow;
}

void Dron::set_iloscSilnikow(int iloscSilnikow)
{
    this->iloscSilnikow = iloscSilnikow;
}

bool Dron::checkakm()
{
    return check_akm;
}

void Dron::wloz(Akumulator * akum){
    if(check_akm==0)
    {
        this -> akumulator = akum;
        check_akm=true;
        std::cout << "Wlozono nowy akumulator" << std::endl;
    }
    else
        std::cout << "Najpierw wyjmij stary akumulator" << std::endl;
}

void Dron::wyjmij(){
    if(check_akm==1)
    {
        //silnik[0].setOn_off(0);
        //silnik[1].setOn_off(0);
        //silnik[2].setOn_off(0);
        //silnik[3].setOn_off(0);
        delete this->akumulator;
        check_akm=false;
        std::cout << "Wyjeto stary akumulator" << std::endl;
    }
    else
    {
        std::cout << "Brak akumulatora" << std::endl;
    }
}

/*void Dron::wypisz_dane_silnikow() {
    int i;
    for(i=0;i<4;i++)
    {
        std::cout<<"Dane silnika nr."<<silnik[i].getId()<<":"<<std::endl;
        std::cout<<"Waga: "<<silnik[i].getWaga()<<std::endl;
        std::cout<<"Stan: "<<silnik[i].getOn_off()<<std::endl;
    }
    std::cout<<std::endl;
}*/
/*
void Dron::wlacz_wylacz_silniki() {
    int j;
    if(check_akm==1)
    {
        for(j=0;j<4;j++)
        {
            if(silnik[j].getOn_off()=="OFF")
            {
                silnik[j].setOn_off(1);
                if(j==3) std::cout<<"Wlaczono silniki"<<std::endl;
            }
            else
            {
                silnik[j].setOn_off(0);
                if(j==3) std::cout<<"Wylaczono silnik"<<std::endl;
            }
        }
    }
    else std::cout<<"Brak akumulatora"<<std::endl;
    
    std::cout<<std::endl;
}
*/
/*
void Dron::polec_1km()
{
    if(silnik[0].getOn_off()=="ON"||silnik[1].getOn_off()=="ON"||silnik[2].getOn_off()=="ON"||silnik[3].getOn_off()=="ON")
    {
        if(check_akm==1)
        {
            if(akumulator->getStan()>10)
            {
                akumulator->setStan(akumulator->getStan()-10);
                std::cout<<"Dron przelecial 1km"<<std::endl;
                std::cout<<"Stan akumulatora wynosi: "<<akumulator->getStan()<<std::endl;
            }
            else
            {
                std::cout<<"Za malo energii, wymien akumulator"<<std::endl;
            }
        }
        else std::cout<<"Brak akumulatora"<<std::endl;
    }
    else std::cout<<"Silniki nie pracuja, wlacz silniki"<<std::endl;
    
    std::cout<<std::endl;
}
*/
void Dron::zmien_kolor()
{
    unsigned short wyb_kol;
    std::cout<<"Wybierz kolor: "<<std::endl;
    std::cout<<"1. Czarny"<<std::endl;
    std::cout<<"2. Bialy"<<std::endl;
    std::cout<<"3. Niebieski"<<std::endl;
    std::cout<<"4. Czerwony"<<std::endl;
    std::cin>>wyb_kol;
    
    switch (wyb_kol)
    {
        case 1:
            obudowa.setKolor("Czarny");
            std::cout<<"Zmieniono kolor obudowy na "<<obudowa.getKolor()<<std::endl;
            break;
            
        case 2:
            obudowa.setKolor("Bialy");
            std::cout<<"Zmieniono kolor obudowy na "<<obudowa.getKolor()<<std::endl;
            break;
            
        case 3:
            obudowa.setKolor("Niebieski");
            std::cout<<"Zmieniono kolor obudowy na "<<obudowa.getKolor()<<std::endl;
            break;
            
        case 4:
            obudowa.setKolor("Czerwony");
            std::cout<<"Zmieniono kolor obudowy na "<<obudowa.getKolor()<<std::endl;
            break;
            
        default:
            std::cout<<"Brak danej funkcji"<<std::endl;
            break;
    }
    std::cout<<std::endl;
}

void Dron::wypisz_wage()
{
    int i;
    unsigned short w=0;
    for(i=0;i<4;i++)
    {
        //w+=silnik[i].getWaga();
    }
    if(check_akm==1)
        w+=akumulator->getWaga();
    w+=obudowa.getWaga();
    std::cout<<"Laczna waga urzadzenia wynosi: "<<w<<std::endl;
}

int Dron::get_licznik()
{
    return licznikDron;
}

int Dron::licznikDron = 0;

void Dron::przedstaw_sie()
{
    std::cout<<"Jestem z klasy Dron"<<std::endl;
}

std::string Dron::wypiszsie()
{
    return "Jestem z klasy Dron";
}

void Dron::puszbek()
{
    Silnik * wsk = new Silnik;
    wekt.push_back(wsk);
}

