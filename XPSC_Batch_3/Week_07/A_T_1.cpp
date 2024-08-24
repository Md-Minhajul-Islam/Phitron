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
 
    ll n, a, b, p, q; cin >> n >> a >> b >> p >> q;
    ll x = n/a, y = n/b;
    ll lcm = a*(b/__gcd(a, b));
    ll t = n/lcm;
    if(p > q) y -= t;
    else x -= t;
    ll ans = x*p + y*q;
    cout << ans << '\n'; 
    return 0;
}