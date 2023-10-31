// Q: https://codeforces.com/problemset/problem/1744/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        string s;
        cin >> s;
        int f = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
                if (a[j] == a[i] && s[j] != s[i])
                {
                    f = 0;
                    break;
                }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}