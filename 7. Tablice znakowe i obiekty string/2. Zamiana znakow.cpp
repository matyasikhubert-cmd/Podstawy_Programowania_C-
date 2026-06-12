#include <iostream>
using namespace std;

int main() {
    char tekst[21];

    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(tekst, 21);

    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == 'a') {
            tekst[i] = 'o';
        }
    }

    cout << "Zmodyfikowany ciag znakow: " << tekst << endl;

    return 0;
}