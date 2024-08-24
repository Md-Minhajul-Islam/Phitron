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
        vll a(n), v;
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i]; v.push_back(sum);
        }
        int ans = n;
        for(auto u: v)
        {
            int cnt = 0, temp = 0, i;
            ll s = u;
            for(i = 0; i < n; i++)
            {
                if(s < a[i]) break;
                if(s >= a[i]) s -= a[i]; cnt++;
                if(s == 0)
                {
                    temp = max(temp, cnt);
                    cnt = 0, s = u;
                }
            }
            if(i == n && cnt == 0) ans = min(temp, ans); 
        }
        cout << ans <<'\n';
    }
    return 0;
}