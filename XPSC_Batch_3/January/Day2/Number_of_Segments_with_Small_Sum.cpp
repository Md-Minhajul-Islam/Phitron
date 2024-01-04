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
    ll n, s; cin >> n >> s; ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans = 0, sum = 0;
    ll i = 0, j = 0;
    while(j < n)
    {
        sum += a[j];
        if(sum <= s) ans += j-i+1;
        else
        {
            while(sum > s && i <= j) sum -= a[i], i++;
            ans += j-i+1;
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

    // int t; cin >> t;
    // while(t--)
    // {
    solve();
    // }
    return 0;
}