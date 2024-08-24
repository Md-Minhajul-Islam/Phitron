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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int mx = 0, a[n];
        unordered_set<int> s;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
            mx = max(mx, a[i]);
        }
        if(s.size() == 1) cout << -1 <<'\n';
        else
        {
            int idx = -1;
            for(int i = 0; i < n-1; i++)
            {
                if(a[i] == mx && a[i+1] != mx)
                {
                    idx = i+1; break;
                }
                else if(a[i] != mx && a[i+1] == mx)
                {
                    idx = i+2; break;
                }
            }
            cout << idx << '\n';
        }
    }
    return 0;
}