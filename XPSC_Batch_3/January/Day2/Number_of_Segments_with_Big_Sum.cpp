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
    ll n, s; cin >> n >> s;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll i = 0, j = 0;
    ll tot = 0, ans = 0;
    while(j < n)
    {
        tot += a[j];
        if(tot >= s)
        {
            ans += n-j;
            tot -= a[i]; i++;
            while(i <= j && tot >= s)
            {
                tot -= a[i];
                i++;
                ans += n-j;
            }
        }
        j++;
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}