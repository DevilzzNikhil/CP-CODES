#include<bits/stdc++.h>
using namespace std ;

#define f(i,n) for( i = 0 ; i < n ; i++)

int a[3][3] ;


void modify(int i, int j , int x)
{
    a[i][j] += x ;

    if((j+1) < 3)  a[i][j+1] += x ;
    if((j-1) > -1) a[i][j-1] += x ;
    if((i+1) < 3)  a[i+1][j] += x ;
    if((i-1) > -1) a[i-1][j] += x ;    
}

int main()
{

    int i,j;
    f(i,3)
    {
        f(j,3)
        { 
            int x ;
            cin >> x ;
            modify(i,j,x) ;
        }
    }

    f(i,3)
    {
        f(j,3)
        { 
            if(a[i][j] % 2 == 0)
            {
                cout << "1" ;
            }
            else{
                cout << "0";
            }
        }
        cout << endl ;
    }

    
}
