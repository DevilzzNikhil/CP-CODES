#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;

int main()
{   
    string s1 ;
    cin >> s1 ;

    
    for(int j = 0 ; j < s1.length()   ; j++ )
    {
        if( s1[j] == '.')
        {
            cout << 0 ;
        }
        else if( s1[j] == '-' &&  s1[j+1] == '.')
        {
            cout << 1 ;
            j++ ;
        }
        else if( s1[j] == '-' &&  s1[j+1] == '-')
        {
            cout << 2 ;
            j++ ;
        }
    }
    return 0 ;
}