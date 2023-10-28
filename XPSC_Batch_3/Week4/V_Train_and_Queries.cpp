// Q: https://codeforces.com/problemset/problem/1702/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        map<int, pair<int, int>>m;
        for(int i = 1; i <= n; i++)
        {
            int x; cin >> x;
            if(!m[x].first) m[x] = {i, i};
            else m[x].second = i;
        }
        while(k--)
        {
            int u, v; cin >> u >> v;
            if(!m[u].first || !m[v].first || m[u].first > m[v].second) cout <<"NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}