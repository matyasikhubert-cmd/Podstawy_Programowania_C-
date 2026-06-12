#include <iostream>
using namespace std;

int main() {
    int szer, wys;

    cout << "Podaj szerokosc: ";
    cin >> szer;

    cout << "Podaj wysokosc: ";
    cin >> wys;

    for (int i = 0; i < wys; i++) {
        for (int j = 0; j < szer; j++) {
            if (j >= i && j < szer - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}