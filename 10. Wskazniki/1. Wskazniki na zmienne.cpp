#include <iostream>

using namespace std;

int main()
{
    int a = 6;
    int b = 7;

    int* wskA = &a;
    int* wskB = &b;

    cout << "Przed modyfikacja:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    *wskA = 15;
    *wskB = 20;

    cout << "\nPo modyfikacji:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}