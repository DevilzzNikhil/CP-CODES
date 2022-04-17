#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
typedef long long ll;


int main()
{
    string s;
    cin >> s ;
    int o = s.length();
    int count = 1;
    int k = 0;
    for (int i = 0; i < o; i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
        }
        else{
            k = max(k,count);
            count = 1; 
        }
    }
    cout << k << endl;
}
