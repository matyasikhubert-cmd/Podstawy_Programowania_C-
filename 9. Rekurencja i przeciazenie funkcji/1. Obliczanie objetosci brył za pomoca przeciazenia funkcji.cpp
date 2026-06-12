#include <iostream>

using namespace std;

// Stała pi
const double PI = 3.1415;

// Przeciążone funkcje CalculateVolume:

// 1) Sześcian: jeden parametr - długość boku a
double CalculateVolume(double a) {
    return a * a * a;
}

// 2) Prostopadłościan: trzy parametry - a, b, h
double CalculateVolume(double a, double b, double h) {
    return a * b * h;
}

// 3) Walec: dwa parametry - r, h (używamy stałej PI)
double CalculateVolume(double r, double h) {
    return PI * r * r * h;
}

// Funkcja wyświetlająca wynik
void DisplayResult(double volume) {
    cout << "Objetosc wynosi: " << volume << endl;
}

int main() {
    int choice;

    cout << "Wybierz bryle do obliczenia objetosci:\n";
    cout << "1 - Szescian (V = a^3)\n";
    cout << "2 - Prostopadloscian (V = a * b * h)\n";
    cout << "3 - Walec (V = pi * r^2 * h)\n";
    cout << "Wybierz numer bryly: ";
    cin >> choice;

    if (choice == 1) {
        // Sześcian
        double a;
        cout << "Podaj dlugosc boku: ";
        cin >> a;

        double volume = CalculateVolume(a);
        DisplayResult(volume);

    } else if (choice == 2) {
        // Prostopadłościan
        double a, b, h;
        cout << "Podaj dlugosc: ";
        cin >> a;
        cout << "Podaj szerokosc: ";
        cin >> b;
        cout << "Podaj wysokosc: ";
        cin >> h;

        double volume = CalculateVolume(a, b, h);
        DisplayResult(volume);

    } else if (choice == 3) {
        // Walec
        double r, h;
        cout << "Podaj promien podstawy: ";
        cin >> r;
        cout << "Podaj wysokosc: ";
        cin >> h;

        double volume = CalculateVolume(r, h);
        DisplayResult(volume);

    } else {
        cout << "Nieprawidlowy wybor bryly." << endl;
    }

    return 0;
}
