#include <iostream>
using namespace std;

int main() {
    double celsjusz;
    char wybor;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsjusz;

    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> wybor;

    switch (wybor) {
        case 'K':
        case 'k':
            cout << "Temperatura w Kelvinach: " << celsjusz + 273.15 << endl;
            break;
        case 'F':
        case 'f':
            cout << "Temperatura w stopniach Fahrenheita: " << (celsjusz * 9/5) + 32 << endl;
            break;
        default:
            cout << "Blad: nieprawidlowa opcja!" << endl;
    }

    return 0;
}