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

ld dis(ld x1, ld y1, ld x2, ld y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
        ld px, py; cin >> px >> py;
        ld ax, ay; cin >> ax >> ay;
        ld bx, by; cin >> bx >> by;
        ld ao = dis(ax, ay, 0.0, 0.0), bo = dis(bx, by, 0.0, 0.0);
        ld ap = dis(ax, ay, px, py), bp = dis(bx, by, px, py);
        ld ab = dis(ax, ay, bx, by);
        ld ans = 1e9;
        ans = min(ans, max(ao, ap));
        ans = min(ans, max(bo, bp));
        ans = min(ans, max({ab/2, ao, bp}));
        ans = min(ans, max({ab/2, bo, ap}));
        cout << setprecision(10) << fixed << ans << '\n';
    }
    return 0;
}