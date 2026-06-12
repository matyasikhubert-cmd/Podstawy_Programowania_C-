#include <iostream>
#include <fstream>
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
    ifstream test("dane.txt");

    if(!test)
    {
        cout << "Plik dane.txt nie istnieje." << endl;
        cout << "Tworzenie pliku..." << endl;

        ofstream nowy("dane.txt");

        nowy << "Adam Nowicki 22" << endl;
        nowy << "Katarzyna Lis 28" << endl;

        nowy.close();
    }

    test.close();

    char wybor;

    cout << "Czy chcesz dodac nowa osobe? (t/n): ";
    cin >> wybor;

    if(wybor == 't' || wybor == 'T')
    {
        Osoba osoba;

        cout << "Podaj imie: ";
        cin >> osoba.imie;

        cout << "Podaj nazwisko: ";
        cin >> osoba.nazwisko;

        cout << "Podaj wiek: ";
        cin >> osoba.wiek;

        ofstream plik("dane.txt", ios::app);

        plik << osoba.imie << " "
             << osoba.nazwisko << " "
             << osoba.wiek << endl;

        plik.close();
    }

    cout << "\nDane w pliku:" << endl;

    ifstream odczyt("dane.txt");

    string imie, nazwisko;
    int wiek;

    while(odczyt >> imie >> nazwisko >> wiek)
    {
        cout << "Imie: " << imie
             << ", Nazwisko: " << nazwisko
             << ", Wiek: " << wiek << endl;
    }

    odczyt.close();

    return 0;
}