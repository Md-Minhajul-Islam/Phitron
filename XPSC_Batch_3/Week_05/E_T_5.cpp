// Q: https://codeforces.com/problemset/problem/817/C
#include<bits/stdc++.h>
using namespace std;
bool isValid(long long m, long long s)
{
    long long n = m, sum = 0;
    while(m)
    {
        sum += m%10;
        m /= 10;
    }
    if(n-sum >= s) return 1;
    else return 0;
}
int main()
{
    long long n, s; cin >> n >> s;
    long long l = 0, r = n;
    long long ans = 0;
    while(l <= r)
    {
        long long m = l + (r-l)/2;
        if(isValid(m, s))  ans = m, r = m-1;
        else l = m+1;
    }
    if(ans) ans = n-ans+1;
    cout << ans << '\n';
    return 0;
}