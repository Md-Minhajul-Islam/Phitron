// Q: https://codeforces.com/problemset/problem/467/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k; cin >> n >> m >> k; int a[m+1];
    for(int i = 0; i <= m; i++) cin >> a[i];
    int ans = 0;
    for(int i = 0; i < m; i++)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++)
        {
            int mask = 1 << j;
            int x, y;
            if((a[i]&mask) == 0) x = 0;
            else x = 1;
            if((a[m]&mask) == 0) y = 0;
            else y = 1;
            if(x != y) ++cnt; 
        }
        if(cnt <= k) ++ans;
    }
    cout << ans;
    return 0;
}