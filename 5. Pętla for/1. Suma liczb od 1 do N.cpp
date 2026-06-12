#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;

    cout << "Podaj liczbe N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        suma += i;
    }

    cout << "Suma liczb od 1 do " << N << " wynosi: " << suma << endl;

    return 0;
}