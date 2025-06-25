#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, y;
    cin >> n >> y;
    for (int a = 0; a <= n; a++)
    {
        for (int b = 0; b <= n - a; b++)
        {
            int c = n - a - b;
            int total = a * 10000 + b * 5000 + c * 1000;
            if (total == y)
            {
                cout << a << " " << b << " " << c << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}