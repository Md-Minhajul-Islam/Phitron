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
 
    int t; cin >> t;
    while(t--)
    {
        ll n, x; cin >> n >> x;
        vll v(n); for(int i = 0; i < n; i++) cin >> v[i];
        ll l = 0, h = 2e9+7, ans = 0ll;
        while(l <= h)
        {
            ll m = l + ((h-l) >> 1);
            ll total = 0;
            for(int i = 0; i < n; i++)
            {
                if(m > v[i]) total += m-v[i];
            }
            if(total <= x)
            {
                ans = max(ans, m);
                l = m+1;
            }
            else h = m-1;
        }
        cout << ans <<'\n';
    }
    return 0;
}