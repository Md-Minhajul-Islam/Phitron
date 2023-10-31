// Q: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, c = 1;
    while(cin >> n >> q && (n != 0 || q != 0))
    {
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        cout << "CASE# " << c << ":\n";
        while(q--)
        {
            int x; cin >> x;
            int l = 0, r = n-1, ans = -1;
            while(l <= r)
            {
                int m = l + (r-l)/2;
                if(a[m] == x)
                {
                    if(m != 0 && a[m-1] == x) r = m-1;
                    else
                    {
                        ans = m+1; break;
                    }
                }
                else if(a[m] < x) l = m+1;
                else r = m-1;
            }
            if(ans == -1) cout << x <<" not found\n";
            else cout << x <<" found at " << ans << '\n';
        }
        ++c;
    }
    return 0;
}