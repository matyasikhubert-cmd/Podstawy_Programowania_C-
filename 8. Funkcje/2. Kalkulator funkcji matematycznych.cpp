#include <iostream>
using namespace std;

double suma(double a, double b) { return a + b; }
double roznica(double a, double b) { return a - b; }
double iloczyn(double a, double b) { return a * b; }
double iloraz(double a, double b) { return b != 0 ? a / b : 0; }

int main() {
    int wybor;

    do {
        cout << "\nWybierz funkcje:\n";
        cout << "1. Suma\n2. Roznica\n3. Iloczyn\n4. Iloraz\n0. Wyjscie\n";
        cout << "Wybrana funkcja: ";
        cin >> wybor;

        if (wybor == 0) break;

        double a, b;
        cout << "Podaj pierwsza liczbe: ";
        cin >> a;
        cout << "Podaj druga liczbe: ";
        cin >> b;

        switch (wybor) {
            case 1: cout << "Wynik: " << suma(a, b); break;
            case 2: cout << "Wynik: " << roznica(a, b); break;
            case 3: cout << "Wynik: " << iloczyn(a, b); break;
            case 4:
                if (b != 0)
                    cout << "Wynik: " << iloraz(a, b);
                else
                    cout << "Blad: dzielenie przez zero!";
                break;
            default:
                cout << "Nieprawidlowy wybor!";
        }

        cout << endl;

    } while (true);

    cout << "Koniec programu." << endl;
    return 0;
}