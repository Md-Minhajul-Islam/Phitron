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
        int n, k; cin >> n >> k;
        int a[n]; vii v;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.pb(a[i]);
        }
        sort(a, a+n);
        int f = 0;
        for(int i = 0; i < n; i++)
        {
            if(i != a[i])
            {
                v.pb(i); f = 1; break;
            }
        }
        if(!f) v.pb(n);
        if(k%(n+1) == 0)
        {
            for(int i = 0; i < n; i++)cout << v[i] << ' ';
        }
        else
        {
            int start = (n + 1) - (k % (n + 1));
            for(int i = start; i < n + 1; i++) cout << v[i] << ' ';
            for(int i = 0; i < start - 1; i++) cout << v[i] << ' ';
        } 
        cout << '\n';        
    }
    return 0;
}