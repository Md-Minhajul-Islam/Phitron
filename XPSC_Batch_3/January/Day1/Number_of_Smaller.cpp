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
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int j = 0; j < m; j++) cin >> b[j];
    vii v;
    int i = n-1, j = m-1;
    while(i >= 0 && j >= 0)
    {
        if(a[i] < b[j]) v.pb(i+1), j--;
        else i--;
    }
    while(j >= 0) v.pb(0), j--;
    for(int i = v.size()-1; i >= 0; i--) cout << v[i] << ' ';
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