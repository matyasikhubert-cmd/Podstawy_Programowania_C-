#include <iostream>
using namespace std;

int main() {
    int N;
    int i = 2;

    cout << "Podaj liczbe N: ";
    cin >> N;

    cout << "Liczby parzyste od 2 do " << N << ":" << endl;

    while (i <= N) {
        cout << i << endl;
        i += 2;
    }

    return 0;
}