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
        int x; cin >> x;
        string s = to_string(x);
        int ans = 10*((s[0]-'0')-1);
        int cnt = s.size();
        while(cnt)
        {
            ans += cnt;
            cnt--;
        }
        cout << ans <<'\n';
    }
    
    return 0;
}