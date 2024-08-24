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
        int n, k; cin >> n >> k; int a[n];
        vii v;
        vector<pii> vp;
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
            v.pb(a[i]);
            vp.pb({i, v[i]});
        }
        sort(v.begin(), v.end());
        vii ans;
        for(int i = 0; i < n-k; i++)
        {
            ans.pb(v[i]);
        }
        
        
    }
    return 0;
}