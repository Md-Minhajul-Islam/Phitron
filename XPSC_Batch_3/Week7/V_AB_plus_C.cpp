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
const int m = 1e6;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
        // ll n; cin >> n;
        // if(n == 1) cout << -1;
        // else if(n <= 1000000) 
        //     cout << 1 << ' ' << n-1 << ' ' << 1;
        // else
        // {
        //     cout << 1 << ""
        // }

        ll n; cin >> n;
        bool f = 0;
        ll i, x, y;
        for(i = m; i > 0; i--)
        {
           x = n/i, y = n%i;
           if(i <= m && x > 0 && x <= m && y > 0 && y <= m)
           {
            f = 1; break;
           }
        }
        if(n == 2) i = 1, x = 1, y = 1, f = 1;
        if(f) cout << i << ' ' << x << ' ' << y << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}