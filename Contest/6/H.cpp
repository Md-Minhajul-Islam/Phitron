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
        int n; cin >> n;
        string s; cin >> s;
        int f = 0;
        int l = 0, r = n-1;
        while(l+2 < r)
        {
            if(s[l] == s[r] && (r-l-1)%3)
            {
                f = 1;
                break;
            } 
            
        }
    }
    return 0;
}