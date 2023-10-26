// Q: https://vjudge.net/contest/588971#problem/P
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;
        long long sum = 0LL;
        while(n)
        {
            sum += n;
            n /= 2;
        }
        cout << sum << '\n';
    }
    return 0;
}