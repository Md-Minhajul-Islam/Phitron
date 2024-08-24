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
 
    int q; cin >> q;
    while(q--)
    {
        string s, t; cin >> s >> t;
        int a_cnt = 0;
        for(int i = 0; i < t.size(); i++) if(t[i] == 'a') a_cnt++;
        if(a_cnt == 1 && t.size() == 1) cout << 1;
        else if(a_cnt > 0) cout << -1;
        else
        {
            long long ans = pow(2, s.size());
            cout << ans;
        }
        cout <<'\n';
    }
    return 0;
}