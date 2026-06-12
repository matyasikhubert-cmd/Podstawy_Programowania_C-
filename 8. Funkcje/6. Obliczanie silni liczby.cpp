#include <iostream>
using namespace std;

int GetNumberFromUser() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    return n;
}

long long CalculateFactorial(int n) {
    long long wynik = 1;
    for (int i = 1; i <= n; i++) {
        wynik *= i;
    }
    return wynik;
}

void DisplayResult(int n, long long wynik) {
    cout << "Silnia liczby " << n << " wynosi: " << wynik << endl;
}

int main() {
    int n = GetNumberFromUser();
    long long wynik = CalculateFactorial(n);
    DisplayResult(n, wynik);

    return 0;
}