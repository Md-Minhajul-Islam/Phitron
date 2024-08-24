// Q: https://www.spoj.com/problems/EKO/en/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m; cin >> n >> m;
    long long a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    long long l = 0, r = INT_MAX, ans = 0;
    while(l <= r)
    {
        long long h = l + (r-l)/2;
        long long total = 0;
        for(int i = 0; i < n; i++)
            if(a[i] > h) total += a[i]-h;
        if(total >= m)
        {
            ans = max(ans, h);
            l = h+1;
        }
        else r = h-1;
    }
    cout << ans << '\n';
    return 0;
}