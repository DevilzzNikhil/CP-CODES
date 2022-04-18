#include <iostream>
#include <algorithm>

typedef long long ll ;

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
         ll y, x;
        cin >> y >> x;
        ll z = max(x, y);
        if (z % 2 == 0)
        {
            z = z * z - z + 1 - (x - y);
            cout << z << endl;
        }
        else{
             z = z * z - z + 1 + (x - y);
            cout << z << endl;
        }
    }

    return 0;
}