#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int x, intermediar;
    cin >> x;
    for(int i=0;i<x;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<x/2;i++)
    {
        intermediar = a[i];
        a[i] = a[x-1-i];
        a[x-1-i] = intermediar;
    }
    for(int i=0;i<x;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
