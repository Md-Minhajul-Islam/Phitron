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
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            mp[x]++;
        }
        int cnt = 0;
        for(auto m : mp) cnt++;
        vii v;
        for(int i = n; i >= cnt; i--) v.pb(i);
        for(int i = cnt; i >= 1; i--) v.pb(cnt);
        for(int i = n-1; i >= 0; i--)
            cout << v[i] << ' ';
        cout << '\n';
    }
    return 0;
}