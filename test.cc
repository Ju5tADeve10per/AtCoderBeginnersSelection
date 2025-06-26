#include <bits/stdc++.h>
using namespace std;

int main()
{
    string divide[4] = {"dreamer", "eraser", "dream", "erase"};
    string s;
    cin >> s;

    bool can = true;
    for (int i = 0; i < s.size();)
    {
        bool can2 = false;
        for (int j = 0; j < 4; j++)
        {
            string d = divide[j];
            cout << i << ": " << s.substr(i, d.size()) << endl;
            if (s.substr(i, d.size()) == d)
            {
                can2 = true;
                i += d.size();
            }
        }
        if (!can2)
        {
            can = false;
            break;
        }
    }
    cout << (can == true ? "YES" : "NO") << endl;
}