#include <iostream>
#include <algorithm>
#include <cmath>

typedef  long long ll ;

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll count = 0 ;
    for( int i = 1 ; i < n; i++)
    {
        ll z = pow(5,i);
        ll k = floor(n/z) ;

        if( k == 0)
        {
            count+= k ;
            break;
        }
        else{
            count += k ;
        }
    }
    cout << count << endl;
    return 0;
}