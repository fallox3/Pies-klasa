#include <iostream>
using namespace std;

class Pies
{
private:
    string imie;
    int wiek, waga;

public:
    Pies()
    {
        imie = "Szarik";
        wiek = 5;
        waga = 23;
    }
    Pies(string i, int w, int kg)
    {
        imie= i;
        wiek = w;
        waga = kg;
    }

    void szczekanie()
    {
        cout << "HAU HAU HAU HAU\n";
    }
    void jedzenie()
    {
        cout << "Mniaa, Mniam, Mniam\n";
    }
    void opis()
    {
        cout << "Imie: " << imie << "\nWiek: " << wiek << "\nWaga: " << waga << endl;
    }


~Pies()
{
    cout << imie <<" uspiony/a\n";
}
};

int main()
{
    Pies p1;
    p1.opis();
    p1.szczekanie();
    p1.jedzenie();

    Pies p2("Maja", 4, 19);
    p2.opis();
    p2.szczekanie();
    p2.jedzenie();

    return 0;
}
