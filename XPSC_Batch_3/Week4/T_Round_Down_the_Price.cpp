// Q: https://codeforces.com/problemset/problem/1702/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int m; cin >> m;
        int ans = m - pow(10, (int)log10(m));
        cout << ans << '\n';
    }
    return 0;
}