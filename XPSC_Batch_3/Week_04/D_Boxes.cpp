// Q: https://www.codechef.com/problems/BOX95
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int cnt = 0;
        sort(a, a+n);
        priority_queue<long long> q;
        for(int i = n-1; i >= 0; i--)
        {
           if(q.empty() || q.top() < a[i])
           {
                q.push(a[i]); ++cnt;
           }
           else
           {
                long long x = q.top(); q.pop();
                q.push(x^a[i]);
           }
        }
        cout << cnt << '\n';
    }
    return 0;
}