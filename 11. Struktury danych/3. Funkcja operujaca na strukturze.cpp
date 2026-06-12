#include <iostream>
#include <string>

using namespace std;

struct Samochod
{
    string marka;
    string model;
    int rok_produkcji;
};

void WyswietlDane(Samochod auto1)
{
    cout << "Dane samochodu:" << endl;
    cout << "Marka: " << auto1.marka << endl;
    cout << "Model: " << auto1.model << endl;
    cout << "Rok produkcji: " << auto1.rok_produkcji << endl;
}

int main()
{
    Samochod samochod;

    samochod.marka = "HONDA";
    samochod.model = "CIVIC";
    samochod.rok_produkcji = 2019;

    WyswietlDane(samochod);

    return 0;
}