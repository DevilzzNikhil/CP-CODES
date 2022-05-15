#include<iostream>
using namespace std ;
typedef long long ll;

int main()
{
    ll test ;
    cin >> test ;
    
    ll array[test][3] ;

    for(int i = 0 ; i<test ; i++)
    {
        for(int j = 0 ; j < 3 ; j++ )
        {
            cin >> array[i][j] ;
        }

    }

    ll sum1 = 0 ;
    ll sum2 = 0 ; 
    ll sum3 = 0 ;

    for(int i = 0 ; i< test ; i++)
    {
        sum1 += array[i][0] ;
    }
    for(int i = 0 ; i< test ; i++)
    {
        sum2 += array[i][1] ;
    }
    for(int i = 0 ; i< test ; i++)
    {
        sum3 += array[i][2] ;
    }

    if(sum1 == 0 &&  sum2 == 0 && sum3 == 0)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }



}