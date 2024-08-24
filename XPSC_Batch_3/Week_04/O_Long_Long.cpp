// Q: https://codeforces.com/problemset/problem/1843/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; long long a[n];
        long long total = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] < 0) total += (-1*a[i]);
            else total += a[i];
        }
        int i = 0, cnt = 0;
        while(i < n)
        {
            if(a[i] < 0)
            {
                cnt += 1;
                while(i < n && a[i] <= 0) i++;
            }
            i++;
        }
        cout << total <<" " << cnt << '\n';
    }
    return 0;
}