#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve()
{
    ll n , m ;
    cin >> n >> m ;

    vector<string> v(n) ;


    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i] ;
    }
    
    int mini = pow(10,7) ;

    for(int i = 0 ; i< n-1 ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            int dif = 0 ;
            string s1 = v[i], s2 = v[j] ;

            for(int k = 0 ; k< m ; k++)
            {
                dif += abs(((int)s1[k] - (int)s2[k])) ;
            }

            mini = min(mini, dif);
        }
    }

    cout << mini << endl;
    
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
}
