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
 
    // int t; cin >> t;
    // while(t--)
    // {
        int a, b, x; cin >> a >> b >> x;
        string s = "";
        if(a > b) s += '0', a--;
        else s += '1', b--;
        int i = 1;
        while(x - 1)
        {
            if(s[i - 1] == '0')
            {
                s += '1';
                b--; x--;
            } else
            {
                s += '0';
                a--; x--;
            }
            i++;
        }
        if(s[s.size() - 1] == '0')
        {
            while(a)
            {
                s += '0';
                a--;
            }
            while(b)
            {
                s += '1';
                b--;
            }
        } else
        {
            while(b)
            {
                s += '1';
                b--;
            }
            while(a)
            {
                s += '0';
                a--;
            }

        }
        cout << s << '\n';
    // }
    return 0;
}