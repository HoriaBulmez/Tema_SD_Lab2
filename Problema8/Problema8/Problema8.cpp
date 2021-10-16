#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int x, copie, counter = 0, ultima, cifra;
    cout << "Introdu numarul de elemente " << endl;
    cin >> x;
    cout << "Introdu numerele " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < x; i++)
    {
        copie = a[i];
        ultima = copie % 10;
        while (copie != 0)
        {
            cifra = copie % 10;
            copie = copie / 10;
        }
        if (ultima == cifra)
        {
            counter++;
        }
    }
    cout << counter << " numere au prima cifra egala cu ultima";
}
