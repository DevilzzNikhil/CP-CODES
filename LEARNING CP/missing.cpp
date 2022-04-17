#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll t = n - 1;
    ll a[t];
    int o = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    if (n == 2)
    {
        cout << 3 - a[0] << endl;
    }
    else
    {
        sort(a, a + t);
        int k;
        for (int i = 0; i < t; i++)
        {
            if (!(a[i] == i + 1))
            {
                o++;
                cout << i + 1 << endl;
                break;
            }
        }
        if( o ==0 )
        {
            cout << n << endl;
        }
    }
}
