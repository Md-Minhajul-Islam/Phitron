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
 
void solve()
{
    ll n, x; cin >> n >> x;
    map<ll, ll> m; ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    sort(a, a+n);
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(m[a[i]])
        {
            if(m[a[i]*x]) m[a[i]*x]--;
            else ans++;
            m[a[i]]--;
        }
    }
    cout << ans << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}