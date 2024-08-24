// Q: https://vjudge.net/problem/CodeForces-1216B/origin
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; pair<int, long long> a[n];
    for(int i = 0; i < n; i++)
    {
        long long x; cin >> x;
        a[i] = {i+1, x};
    }
    sort(a, a+n, [&](pair<int, long long> x, pair<int, long long> y){
        return x.second > y.second;
    });
    long long total = 0, cnt = 0;
    for(auto p: a)
    {
        total += cnt*p.second+1;
        cnt++;
    }
    cout << total << '\n';
    for(auto p: a)
        cout << p.first <<" ";
    return 0;
}