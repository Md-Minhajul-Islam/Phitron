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
        int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
        x -= a, y -= b;
        if(x > 0) c -= x;
        if(y > 0) c -= y;
        if(c >= 0) cout <<"YES\n";
        else cout <<"NO\n";
    }
    return 0;
}