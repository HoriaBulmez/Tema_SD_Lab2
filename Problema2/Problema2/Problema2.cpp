#include <iostream>

using namespace std;

int main()
{
    float a[100];
    float x;
    int y, st = 0, dr, mij, flag = 0;
    cin >> y;
    for(int i=0;i<y;i++)
    {
        cin >> a[i];
    }
    cin >> x;
    dr = y-1;
    while (st < dr && flag==0)
    {
        mij = (st + dr) / 2;
        if(x==a[mij])
        {
            flag = 1;
            cout << "elementul apartine vectorului";
        }
        else
        {
            if(x<a[mij])
            {
                dr = mij - 1;
            }
            else
            {
                st = mij + 1;
            }

        }
    }
    if(flag==0)
    {
        cout << "Elementul cautat nu apartine vectorului";
    }
    return 0;
}