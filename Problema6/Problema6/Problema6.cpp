#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int b[100];
    int x, inmultire, produsScalar = 0;
    cout << "Scrie numarul de elemente ale vectorului " << endl;
    cin >> x;
    cout << "Scrie elementele primului vector " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    cout << "Scrie elementele vectorului al doilea " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < x; i++)
    {
        inmultire = a[i] * b[i];
        produsScalar = produsScalar + inmultire;
    }
    cout << "Produsul scalar este " << produsScalar;
    return 0;
}
