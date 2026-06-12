#include <iostream>
using namespace std;

int main() {
    char tekst[100];
    char znak;
    int licznik = 0;

    cout << "Podaj ciag znakow: ";
    cin.getline(tekst, 100);

    cout << "Podaj znak do zliczenia: ";
    cin >> znak;

    cout << "Pozycje wystapien: ";

    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == znak) {
            licznik++;
            cout << i << ", ";
        }
    }

    cout << endl;
    cout << "Liczba wystapien znaku '" << znak << "': " << licznik << endl;

    return 0;
}