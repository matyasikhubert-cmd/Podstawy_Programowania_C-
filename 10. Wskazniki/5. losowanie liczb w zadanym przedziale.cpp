#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LosujTablice(int* tab, int rozmiar, int poczatek, int koniec)
{
    for(int i = 0; i < rozmiar; i++)
    {
        tab[i] = poczatek + rand() % (koniec - poczatek + 1);
    }
}

bool SprawdzLiczbe(int* liczba, int* tab, int rozmiar)
{
    for(int i = 0; i < rozmiar; i++)
    {
        if(*liczba == tab[i])
            return true;
    }

    return false;
}

int main()
{
    srand(time(NULL));

    int poczatek, koniec, ilosc;

    cout << "Wartosc poczatkowa: ";
    cin >> poczatek;

    cout << "Wartosc koncowa: ";
    cin >> koniec;

    cout << "Ile liczb wylosowac: ";
    cin >> ilosc;

    int* tab = new int[ilosc];

    LosujTablice(tab, ilosc, poczatek, koniec);

    cout << "\nTablica: ";

    for(int i = 0; i < ilosc; i++)
        cout << tab[i] << ", ";

    cout << endl;

    int liczba;
    int proby = 0;

    while(true)
    {
        cout << "\nPodaj liczbe: ";
        cin >> liczba;

        proby++;

        if(SprawdzLiczbe(&liczba, tab, ilosc))
        {
            cout << "Zgadles!" << endl;
            cout << "Zgadles za " << proby << " razem." << endl;
            break;
        }
        else
        {
            cout << "Nie zgadles" << endl;
        }
    }

    delete[] tab;

    return 0;
}