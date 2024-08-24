// Q: https://www.codechef.com/problems/WARRIORCHEF
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, h; cin >> n >> h;
        long long a[n], total = 0;
        for(int i = 0; i < n; i++) cin >> a[i], total += a[i];
        long long l = 0, r = total, ans = 1e12;
        while(l <= r)
        {
            long long res = l + (r-l)/2;
            long long strn = h, f = 1;
            for(int i = 0; i < n; i++)
            {
                if(a[i] <= res) continue;
                else if(a[i] < strn) strn -= a[i];
                else
                {
                    f = 0; break;
                }
            }
            if(!f) l = res+1;
            else ans = min(ans, res), r = res-1;
        }
        cout << ans << '\n';
    }
    return 0;
}