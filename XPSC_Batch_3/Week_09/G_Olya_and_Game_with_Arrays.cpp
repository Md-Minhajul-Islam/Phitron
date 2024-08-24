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
        int n; cin >> n;
        vii v1, v2;
        int l = n;
        while(n--)
        {
            int m; cin >> m;
            vii v(m);
            for(int i = 0; i < m; i++) cin >> v[i];
            sort(v.begin(), v.end());
            v1.pb(v[0]); v2.pb(v[1]);
        }
        sort(v2.begin(), v2.end());
        sort(v1.begin(), v1.end());
        ll sum = 0;
        for(int i = l-1; i > 0; i--) sum += v2[i];
        sum += v1[0];
        cout << sum <<'\n';
    }
    return 0;
}