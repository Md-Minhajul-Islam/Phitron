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
        int n, m; cin >> n >> m;
        string s1, s2; cin >> s1 >> s2;
        int ans = INT_MAX;
        for(int i = 0; i < n-m+1; i++)
        {
            int cnt = 0;
            for(int j = 0; j < m; j++)
            {
                int x = s1[i+j]-'0', y = s2[j]-'0';
                if(x > y) swap(x, y);
                cnt += min(abs(x-y), (10-y)+x);
            }
            ans = min(ans, cnt);
        }
        cout << ans <<'\n';
    }
    
    return 0;
}