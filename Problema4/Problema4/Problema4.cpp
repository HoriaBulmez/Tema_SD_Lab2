#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int b[100];
    int c[200];
    int x, y, val;
    cin >> x >> y;
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
        c[i] = a[i];
    }
    for (int i = 0; i < y; i++)
    {
        cin >> b[i];
    }
    val = y;
    for (int i = x; i < y + x; i++)
    {
        c[i] = b[val - 1];
        val--;
    }
    for (int i = 0; i < x + y; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
