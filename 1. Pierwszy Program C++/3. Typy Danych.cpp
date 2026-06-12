#include <iostream>
using namespace std;

int main() {
    int liczba = 21;
    float zmiennoprzecinkowa = 4.67;
    char znak = 'C';
    bool logiczna = true;

    cout << "Zmienna calkowita: " << liczba << endl;
    cout << "Zmienna zmiennoprzecinkowa: " << zmiennoprzecinkowa << endl;
    cout << "Zmienna znakowa: " << znak << endl;
    cout << "Zmienna logiczna: " << (logiczna ? "true" : "false") << endl;

    return 0;
}