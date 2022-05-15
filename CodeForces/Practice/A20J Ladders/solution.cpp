#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

int main()
{
    int  n ;
    cin >> n ;
    int array[n] ;
    ll sum = 0 ;

    for(int i = 0 ; i<7 ; i++)
    {
        cin >> array[i] ;
    }

    for(int i = 0 ; i < 10000000  ; i++)
    {
        int k = i%7 ;
        sum += array[k] ;
        if(sum >= n)
        {
            cout << k+1 ;
            break ;
        }
    }
    
    
}