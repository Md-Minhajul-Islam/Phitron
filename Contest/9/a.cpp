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
 
int  fact(ll n)
{
    if(n == 1) return n;
    else return (n * fact(n - 1)) % 998244353;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        if(n%2) cout << 0 << '\n';
        else
        {
            ll ans = fact(n / 2);
            ans = (ans * ans) % 998244353;
            cout << ans << '\n';
        }
    }
    return 0;
}