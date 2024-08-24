// Q: https://vjudge.net/problem/CodeForces-1203C/origin
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    long long gcd = 0;
    for(int i = 0; i < n; i++)
    {
        long long x; cin >> x;
        gcd = __gcd(gcd, x);
    }
    long long cnt = 0;
    for(long long i = 1; i*i <= gcd; i++)
    {
        if(gcd%i == 0)
        {
            ++cnt;
            if(gcd/i != i) ++cnt;
        }
    }
    cout << cnt;
    return 0;
}