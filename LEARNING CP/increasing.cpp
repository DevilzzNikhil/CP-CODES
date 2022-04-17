#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    ll o = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << o << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i+1])
            {
                o = o + a[i] - a[i+1] ;
                a[i+1] = a[i];
            }
        }
        cout << o << endl;
    }
}
