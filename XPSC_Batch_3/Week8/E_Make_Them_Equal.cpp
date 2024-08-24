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
        int n; cin >> n; char ch; cin >> ch;
        string s; cin >> s;
        vii even, odd;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != ch)
            {
                if(i%2) odd.pb(i);
                else even.pb(i);
            }
        }
        int m = 0, ans1, ans2;
        if(odd.size())
        {
            m++;
            
        }
    }
    return 0;
}