#include <iostream>
#include <algorithm>
#include <cmath>

typedef  long long ll ;
using namespace std;

int main()
{
    ll n;
    cin >> n;
    while(n--)
    {
        ll a,b;
        cin >> a >> b;

        if( a==b && a%2 ==1)
        {
            cout << "YES" << endl;
        }
        else if( abs(a-b) == 1)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    
    return 0;
}