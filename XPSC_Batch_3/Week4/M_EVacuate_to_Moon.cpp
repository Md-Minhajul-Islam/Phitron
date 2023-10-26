// Q: https://www.codechef.com/problems/MOONSOON
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n, m, h; cin >> n >> m >> h;
        long long capacity[n], outlet[m];
        for(int i = 0; i < n; i++) cin >> capacity[i];
        for(int i = 0; i < m; i++) cin >> outlet[i];
        sort(capacity, capacity+n);
        sort(outlet, outlet+m);
        int i = n-1, j = m-1;
        long long ans = 0;
        while(i >= 0 && j >= 0)
        {
            ans += min(capacity[i], outlet[j]*h);
            i--, j--;
        }
        cout << ans << '\n';
    }
    return 0;
}