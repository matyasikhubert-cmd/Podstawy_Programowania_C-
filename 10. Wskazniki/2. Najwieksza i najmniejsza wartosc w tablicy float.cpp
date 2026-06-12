#include <iostream>

using namespace std;

void FindMinMax(float* tab, int rozmiar, float* max, float* min)
{
    *max = tab[0];
    *min = tab[0];

    for(int i = 1; i < rozmiar; i++)
    {
        if(tab[i] > *max)
            *max = tab[i];

        if(tab[i] < *min)
            *min = tab[i];
    }
}

int main()
{
    float tab[10] = {1.5, -3.2, 4.8, 7.0, -1.1, 0.0, 3.3, -6.6, 8.9, 2.2};

    float max, min;

    FindMinMax(tab, 10, &max, &min);

    cout << "Tablica: ";

    for(int i = 0; i < 10; i++)
        cout << tab[i] << " ";

    cout << endl;
    cout << "Najwieksza liczba: " << max << endl;
    cout << "Najmniejsza liczba: " << min << endl;

    return 0;
}