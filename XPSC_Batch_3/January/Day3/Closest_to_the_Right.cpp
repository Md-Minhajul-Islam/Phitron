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
    int n, k; cin >> n >> k;
    vii a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    while(k--)
    {
        int x; cin >> x;
        int l = 1, h = n;
        int f = n+1;
        while(l <= h)
        {
            int m = l + (h - l) / 2;

            if(a[m] >= x)
            {
                f = m;
                h = m-1;
            } else l = m+1;
            // cout << m << '=' << f << '\n';
        }
        cout << f << '\n';
    }
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