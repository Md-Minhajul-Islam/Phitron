// Q: https://codeforces.com/problemset/problem/1714/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        unordered_set<int> s;
        int n; cin >> n; int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int ans = 0;
        int i = n-1;
        while(i >= 0)
        {
            if(s.empty() || s.find(a[i]) == s.end())
                s.insert(a[i]);
            else
            {
                ans = i+1; break;
            }
            i--;
        }
        cout << ans << '\n';
    }
    return 0;
}