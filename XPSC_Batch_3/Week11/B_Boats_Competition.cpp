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
// #define mp make_pair
 
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int mxm = 0; 
        for(int j = 1; j <= 2*n; j++)
        {
            map<int, int> mp;
            for(int i = 0; i < n; i++) mp[a[i]]++;
            int cnt = 0;
            for(int i = 0; i < n; i++)
            {
                if(mp[j-a[i]] && mp[a[i]])
                {
                    if((a[i] != j-a[i]) || mp[j-a[i]] > 1)
                    {
                        cnt++, mp[j-a[i]]--, mp[a[i]]--;
                    }
                }
            } 
            mxm = max(mxm, cnt);
        }
        cout << mxm << '\n';
    }
    return 0;
}