// Q: https://vjudge.net/problem/CodeForces-1213B/origin
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int ans = 0, curr = a[n-1];
        for(int i = n-2; i >= 0; i--)
        {
            if(a[i] > curr) ans++;
            else curr = a[i];
        }
        cout << ans << '\n';
    }
    return 0;
}