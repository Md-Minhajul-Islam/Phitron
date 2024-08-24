// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, m; cin >> n >> m; long long a[n];
    ll sum = 0; 
    for(int i = 0; i < n; i++)
    {
        ll x, y; cin >> x >> y;
        sum += x; a[i] = x-y;
    }
    sort(a, a+n);
    int cnt = 0, i = n-1;
    while(sum > m && i >= 0)
    {
        cnt++; sum -= a[i];
        i--;
    }
    // cout << sum << ' ' << cnt << '\n';
    if(sum > m) cout << -1 <<'\n';
    else cout <<  cnt << '\n';

    
    return 0;
}