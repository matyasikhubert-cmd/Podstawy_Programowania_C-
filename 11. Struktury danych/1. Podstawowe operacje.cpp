#include <iostream>
#include <string>

using namespace std;

struct Osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

int main()
{
    Osoba osoba;

    osoba.imie = "Adam";
    osoba.nazwisko = "Nowicki";
    osoba.wiek = 22;

    cout << "Dane przed modyfikacja:" << endl;
    cout << "Imie: " << osoba.imie
         << ", Nazwisko: " << osoba.nazwisko
         << ", Wiek: " << osoba.wiek << endl;

    osoba.wiek = 27;

    cout << "\nDane po modyfikacji:" << endl;
    cout << "Imie: " << osoba.imie
         << ", Nazwisko: " << osoba.nazwisko
         << ", Wiek: " << osoba.wiek << endl;

    return 0;
}