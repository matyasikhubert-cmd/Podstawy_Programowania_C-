#include <iostream>

using namespace std;

int ObliczSume(int* tab, int rozmiar)
{
    int suma = 0;

    for(int i = 0; i < rozmiar; i++)
        suma += *(tab + i);

    return suma;
}

int main()
{
    const int ROZMIAR = 4;
    int tab[ROZMIAR] = {5, 10, 15, 20};

    cout << "Suma elementow tablicy: "
         << ObliczSume(tab, ROZMIAR) << endl;

    for(int i = 0; i < ROZMIAR; i++)
    {
        cout << "Podaj nowa wartosc dla elementu "
             << i << ": ";
        cin >> tab[i];
    }

    cout << "\nNowa tablica:" << endl;

    for(int i = 0; i < ROZMIAR; i++)
        cout << tab[i] << " ";

    cout << endl;

    cout << "Nowa suma elementow tablicy: "
         << ObliczSume(tab, ROZMIAR) << endl;

    return 0;
}