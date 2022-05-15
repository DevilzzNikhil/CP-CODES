#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int small = 0, large = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] > 91)
        {
            small++;
        }
        else
        {
            large++ ;
        }
    }

    if (large > small)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] > 91)
            {
                s[i] = s[i] - 32 ;
            }
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] < 91)
            {
                s[i] = s[i] + 32 ;
            }
        }
    }

    cout << s ;
    
}
