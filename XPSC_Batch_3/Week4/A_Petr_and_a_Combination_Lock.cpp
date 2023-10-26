// Q: https://codeforces.com/problemset/problem/1097/B
#include<bits/stdc++.h>
using namespace std;
bool check(int n, int a[], int s)
{
    if(s >= 360) s -= 360; 
    if(n < 0) return s == 0;
    return (check(n-1, a, s+a[n]) || check(n-1, a, s-a[n]));
}
int main()
{
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    if(check(n-1, a, 0)) cout <<"YES\n";
    else cout << "NO\n";
    return 0;
}