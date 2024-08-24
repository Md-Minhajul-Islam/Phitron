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
        int n, k, d; cin >> n >> k >> d;
        int a[n]; 
        for(int i = 0; i < n; i++) cin >> a[i];
        int ans = 1000;
        for(int i = 0; i <= n-d; i++)
        {
            set<int> s;
            for(int j = i; j < i+d; j++) s.insert(a[j]);
            int m = s.size();
            ans = min(ans, m);
        }
        cout << ans << '\n';
    }
    return 0;
}