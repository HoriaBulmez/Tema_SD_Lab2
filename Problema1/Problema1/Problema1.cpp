#include <iostream>

using namespace std;
int main()
{
    int v[100], minim = INT_MAX, maxim = INT_MIN;
    int n, p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        v[i] = p;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] < minim)
        {
            minim = v[i];
        }
        if (v[i] > maxim)
        {
            maxim = v[i];
        }
    }
    cout << "minimul este " << minim << endl;
    cout << "maximul este " << maxim;
    return 0;
}
