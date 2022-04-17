#include <iostream>
using namespace std;

int algo(long long int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n%2 ==1)
    {
        n = 3*n + 1;
        cout << n << " " ;
        return algo(n);
    }
    else{
        n = n/2 ;
        cout << n << " ";
        return algo(n);
    }
}

int main()
{
    long long int n;
    cin >> n;
    if (n == 1)
    { 
        cout << 1 ;
    }
    else
    {
        cout << n << " " ;
        algo(n);
    }
    return 0;
}