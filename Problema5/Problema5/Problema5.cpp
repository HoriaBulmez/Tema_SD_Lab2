#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int b[100];
    int c[100];
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < y; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < x; i++)
    {
        c[i] = a[i] + b[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
