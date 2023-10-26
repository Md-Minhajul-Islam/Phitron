// Q: https://codeforces.com/problemset/problem/1843/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int ans = 0;
        int l = 0, r = n-1;
        while(l < r)
        {
            ans += a[r]-a[l];
            l++, r--;
        }
        cout << ans <<'\n';
    }
    return 0;
}