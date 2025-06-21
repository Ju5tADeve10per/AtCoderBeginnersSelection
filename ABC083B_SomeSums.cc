#include <bits/stdc++.h>
using namespace std;

int calc_sum(int n)
{
    int tmp = 0;
    while (n)
    {
        tmp += n % 10;
        n /= 10;
    }
    return tmp;
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum = calc_sum(i);
        if (a <= sum && sum <= b)
            res += i;
    }
    cout << res << endl;
}