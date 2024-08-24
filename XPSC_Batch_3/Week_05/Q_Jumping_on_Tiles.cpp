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
        string s; cin >> s;
        vector<pii> v;
        for(int i= 0; i < s.size(); i++)
            v.pb(mp(s[i], i+1));
        sort(v.begin(), v.end(), [&](pii a, pii b){
            if(a.fi == b.fi) return a.se < b.se;
            else return a.fi < b.fi;
        });
        // for(pii u: v)
        // {
        //     cout << u.fi <<" " << u.se << '\n';
        // }
        int strt = s[0], end = s[s.size()-1];
        
        if(strt < end)
        {
            int cost = 0, step = 0, f = 0;
            vii ans;
            for(int i = 0; i < v.size(); i++)
            {
                if(v[i].fi == end && v[i].se == s.size())
                {
                    step++;
                    ans.pb(v[i].se); break;
                }
                else if(v[i].fi == strt || f)
                {
                    cost += v[i+1].fi-v[i].fi;
                    
                    step++;
                    ans.pb(v[i].se);
                    f = 1;
                }
            }
            cout << cost <<' '<<step <<'\n';
            for(auto a: ans) cout << a << ' ';
        }
        else
        {
            int cost = 0, step = 0, f = 0;
            vii ans;
            for(int i = v.size()-1; i >= 0; i--)
            {
                if(v[i].fi == end && v[i].se == s.size())
                {
                    step++;
                    ans.pb(v[i].se); break;
                } else if(v[i].fi == strt || f)
                {
                    cost += v[i].fi - v[i-1].fi;
                    // cout << v[i].fi <<"->" << v[i]
                    // cout << cost << '\n';
                    step++;
                    ans.pb(v[i].se);
                    f = 1;
                }
            }
            cout << cost << ' ' << step << '\n';
            for(auto a : ans) cout << a << ' ';
        }
        cout << '\n';
    }
    return 0;
}