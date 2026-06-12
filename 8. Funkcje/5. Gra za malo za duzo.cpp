#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void DuzaMala(int liczba, int wylosowana) {
    if (liczba < wylosowana)
        cout << "Za malo" << endl;
    else if (liczba > wylosowana)
        cout << "Za duzo" << endl;
    else
        cout << "Gratulacje! Odgadles liczbe." << endl;
}

bool CheckLiczba(int liczba, int wylosowana) {
    return liczba == wylosowana;
}

int main() {
    srand(time(NULL));
    int wylosowana = rand() % 100 + 1;

    int liczba;

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        DuzaMala(liczba, wylosowana);

    } while (!CheckLiczba(liczba, wylosowana));

    return 0;
}