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
        int n; cin >> n;
        string s, ans  = ""; cin >> s;

        int i = 0;
        while(i < n)
        {
            if((i+2 < n && s[i+2] == '0') && (i+3 >= n || s[i+3] != '0'))
            {
                int x = 10*(s[i]-'0') + (s[i+1]-'0') + 'a'-1;
                ans += x;
                i += 3;
            }
            else
            {
                int x = (s[i]-'0')+'a'-1;
                ans += x;
                i++;
            }
        }
        cout << ans <<'\n';
    }
    
    return 0;
}