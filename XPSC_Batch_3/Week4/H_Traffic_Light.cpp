// Q:https://codeforces.com/problemset/problem/1744/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> g, c;
        int n; char ch;
        cin >> n >> ch;
        string s; cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g') g.push_back(i);
            else if (s[i] == ch) c.push_back(i);
        }
        int ans = 0;
        for (int i = 0; i < c.size(); i++)
        {
            int mini = 1000000;
            for (int j = 0; j < g.size(); j++)
            {
                if (c[i] > g[j])
                    mini = min(mini, n - c[i] + g[j]);
                else
                    mini = min(mini, g[j] - c[i]);
            }
            ans = max(ans, mini);
        }
        cout << ans << '\n';
    }
    return 0;
}