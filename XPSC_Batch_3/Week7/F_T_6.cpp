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
 
    ll n, k; cin >> n >> k;
    vll v;
    for(ll i = 1; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            v.pb(i);
            if(n/i != i) v.pb(n/i);
        }
    }
    sort(v.begin(), v.end());
    if(k > v.size()) cout << -1 <<'\n';
    else cout<< v[k-1] << '\n';
    return 0;
}