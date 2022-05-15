#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;

int main()
{
    ll n, k ;
    cin >> n >> k ;

    
    string s1 ;
    cin >> s1 ;

    if( k== 0)
    {
        cout << s1 << endl;
        return 0 ;
    }

    for(int i = 0 ; i< k ; i++)
    {
        for(int j = 0 ; j < s1.length() - 1  ; j++ )
        {
            if( s1[j] == 'B' &&  s1[j+1] == 'G')
            {
                s1[j] = 'G' ;
                s1[j+1] ='B' ;
                j++;
            }
        }

    }
    cout << s1 << endl;
    return 0 ;
}