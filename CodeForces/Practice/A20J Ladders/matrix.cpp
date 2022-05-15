#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;

int main()
{
    
    ll array[5][5] ;

    for(int i = 0 ; i< 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++ )
        {
            cin >> array[i][j] ;
        }

    }
    ll row;
    ll column ;

    for(int i = 0 ; i< 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++ )
        {
            if(array[i][j] == 1)
            {
                row = i+1 ;
                column = j+1 ;
            }
        }

    }
    cout << abs(row-3) + abs(column-3) << endl;
    return 0 ;
}