#include <iostream>

using namespace std;

int main()
{
    float a[100];
    int x, pozitii = 1, maxim = INT_MIN;
    cin >> x;
    for(int i=0;i<x;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<x;i++)
    {
        if (a[i] == maxim)
        {
            pozitii++;
        }
        else if(a[i]>maxim)
        {
            maxim = a[i];
            pozitii = 1;
        }
    }
    cout << pozitii;
}
