#include <iostream>
using namespace std;


class Czworonog
{
    string imie;
    int wiek;
public:
    Czworonog()
    {
        imie = "Cywil";
        wiek = 7;
    }
    int zWiek()
    {
        return wiek;
    }
    string zImie()
    {
        return imie;
    }
    ~Czworonog()
    {
        cout << "czworonog skasowany\n";
    }
};

class Pies : public Czworonog
{
private:
    int pWaga, pWiek;
    string pImie;

public:
    /*Pies()
    {
        imie = "Szarik";
        wiek = 5;
        waga = 23;
    }*/
    Pies() : Czworonog ()
    {
        pImie = zImie();
        pWiek = zWiek();
        pWaga = 77;
    }

    void szczekanie()
    {
        cout << "HAU HAU HAU HAU\n";
    }
    void jedzenie()
    {
        cout << "Mniam, Mniam, Mniam\n";
    }
    void opis()
    {
        cout << "Imie: " << pImie << "\nWiek: " << pWiek << "\nWaga: " << pWaga << endl;
    }


~Pies()
{
    cout << "Pies uspiony/a\n";
}
};

;

int main()
{
    Pies d1;
    d1.szczekanie();
    d1.jedzenie();
    d1.opis();


    return 0;
}
