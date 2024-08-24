// Q: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2408
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        int a[n], mx_cpacty = 0;
        for(int i = 0; i < n; i++)
            cin >> a[i], mx_cpacty += a[i];
        int l = 0, r = mx_cpacty, ans = INT_MAX;
        while(l <= r)
        {
            int cpacty = l + (r-l)/2;
            int cnt = 1, i = 0, s = 0, f = 1;
            while(i < n)
            {
                if(s+a[i] <= cpacty) s += a[i];
                else if(a[i] <= cpacty) cnt += 1, s = a[i];
                else
                {
                    f = 0; break;
                }
                i++;
            }
            if(f && cnt <= m) ans = min(cpacty, ans), r = cpacty - 1;
            else l = cpacty + 1;
        }
        cout << ans << '\n';
    }
    return 0;
}