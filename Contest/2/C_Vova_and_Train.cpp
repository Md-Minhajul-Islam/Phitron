// Q: https://vjudge.net/problem/CodeForces-1066A/origin
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int L, v, l, r;
        cin >> L >> v >> l >> r;
        int ans = 0;
        if(l > L)
        {
            ans = L/v;
        }
        else if(l == L)
        {
            L -= 1;
            ans = L/v;
        }
        else
        {
            if (l < L)
            {
                ans += l / v;
                if (l % v == 0)
                    ans -= 1;
            }
            if (r < L)
            {
                ans += L / v - r / v;
            }
        }

        cout << ans <<"\n";
    }
    return 0;
}