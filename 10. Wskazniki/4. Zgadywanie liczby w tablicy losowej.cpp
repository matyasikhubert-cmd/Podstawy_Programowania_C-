#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LosujTablice(int* tab, int rozmiar)
{
    for(int i = 0; i < rozmiar; i++)
        tab[i] = rand() % 51;
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

    const int ROZMIAR = 10;
    int tab[ROZMIAR];

    LosujTablice(tab, ROZMIAR);

    cout << "Tablica: ";

    for(int i = 0; i < ROZMIAR; i++)
        cout << tab[i] << ", ";

    cout << endl;

    int liczba;
    int proby = 0;

    do
    {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        proby++;

        if(SprawdzLiczbe(&liczba, tab, ROZMIAR))
        {
            cout << "Zgadles!" << endl;
            cout << "Zgadles za " << proby << " razem." << endl;
            break;
        }
        else
        {
            cout << "Nie zgadles" << endl;
        }

    } while(true);

    return 0;
}