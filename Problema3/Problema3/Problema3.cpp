#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int x, n, numereMaiMari = 0, numereMaiMici = 0;
    cout << "Alege-l pe x:" << endl;
    cin >> x;
    cout << "Alege numarul de elemente" << endl;
    cin >> n;
    cout << "Alege numerele" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            numereMaiMari++;
        }
        if (a[i] < x)
        {
            numereMaiMici++;
        }
    }
    cout << numereMaiMari << " sunt strict mai mari ca x" << endl;
    cout << numereMaiMici << " sunt strict mai mici ca x";
    return 0;
}