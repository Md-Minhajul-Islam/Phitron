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
        int n, k; cin >> n >> k;
        string s; cin >> s;
        vll v;
        for(long long int i = 0; i < n; i++)
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') v.pb(i);
        ll ans = 1ll;
        int cnt = 0;
        for(int i = 0; i < v.size(); i++)
        {
            cnt++;
            if(cnt == k)
            {
                if(i + 1 < v.size()) ans = (ans * (v[i + 1] - v[i])) % 1000000007;
                cnt = 0;
            }
        }
        cout << ans << '\n';
    }
    
    return 0;
}