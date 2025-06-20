#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    int i = 0;
    while (1)
    {
        if (a[i] % 2 != 0)
            break;
        else
        {
            a[i] /= 2;
            i++;
        }
        if (i == n - 1)
        {
            sum++;
            i = 0;
        }
    }
    cout << sum << endl;
}