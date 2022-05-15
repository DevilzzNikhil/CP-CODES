#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std ;
typedef long long ll ;

void solve()
{
    ll n, m ;
    cin >> n >> m;

    string s[n] ;

    for(int i =0 ; i< n ; i++ )
    {
        cin >> s[i] ;
    }
    
    cout << abs(strcmp(s[0], s[1])) << endl;
}

int main()
{
    ll test ;
    cin >> test ;
    while(test--)
    {
        solve() ;
    }
}