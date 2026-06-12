#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main()
{
    int wybor;

    cout << "1 - Utworz nowy plik" << endl;
    cout << "2 - Usun plik" << endl;
    cout << "3 - Zmien nazwe pliku" << endl;
    cout << "Twoj wybor: ";
    cin >> wybor;

    string nazwa, nowaNazwa;

    switch(wybor)
    {
        case 1:
        {
            cout << "Podaj nazwe nowego pliku: ";
            cin >> nazwa;

            ofstream plik(nazwa);
            plik.close();

            cout << "Plik '" << nazwa
                 << "' zostal utworzony." << endl;
            break;
        }

        case 2:
        {
            cout << "Podaj nazwe pliku do usuniecia: ";
            cin >> nazwa;

            if(remove(nazwa.c_str()) == 0)
                cout << "Plik zostal usuniety." << endl;
            else
                cout << "Blad podczas usuwania pliku." << endl;

            break;
        }

        case 3:
        {
            cout << "Podaj aktualna nazwe pliku: ";
            cin >> nazwa;

            cout << "Podaj nowa nazwe pliku: ";
            cin >> nowaNazwa;

            if(rename(nazwa.c_str(), nowaNazwa.c_str()) == 0)
                cout << "Nazwa pliku zostala zmieniona." << endl;
            else
                cout << "Blad podczas zmiany nazwy." << endl;

            break;
        }

        default:
            cout << "Nieprawidlowy wybor." << endl;
    }

    return 0;
}