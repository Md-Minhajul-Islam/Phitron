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
 
    int n; cin >> n;
    vii v;
    for(int i = 2; i <= n; i++)
    {
        while(n-i != 1 && n-i >= 0)
        {
            v.pb(i); n -= i;
        }
    }
    cout << v.size() <<'\n';
    for(int u: v) cout << u <<" ";
    cout << '\n';
    return 0;
}