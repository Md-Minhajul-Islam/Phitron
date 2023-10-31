// Q: https://www.spoj.com/problems/AGGRCOW/en/
#include<bits/stdc++.h>
using namespace std;
bool isValid(int m, int a[], int n, int c)
{
    int cnt = 1, i = 0, j = 0;
    while(j < n)
    {
        if(a[j]-a[i] >= m) cnt+=1, i = j;
        j++;
    }
    if(cnt >= c) return 1;
    else return 0;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, c; cin >> n >> c;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int l = 0, r = a[n - 1] - a[0], ans;
        while(l <= r)
        {
            int m = l + (r - l) / 2;
            if(isValid(m, a, n, c)) ans = m, l = m + 1; 
            else r = m - 1;
        }
        cout << ans << '\n';
    }
    return 0;
}