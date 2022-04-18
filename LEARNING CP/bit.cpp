#include <iostream>
#include <algorithm>
#include <cmath>

typedef  long long ll ;
const ll N = 1e9 + 7;

using namespace std;

int main()
{
    ll n;
    cin >> n ;
    int k =2;

    for(int i =1; i < n ; i++)
    {
        k = (2*k)%N;
    }
    cout << k << endl;

    
    return 0;
}