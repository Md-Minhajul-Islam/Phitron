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
 
void solve()
{
    int n; cin >> n;
    vii a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int k; cin >> k;
    while(k--)
    {
        int low, high; cin >> low >> high;
        int l = 0, h = n-1, f1 = -1;
        while(l <= h)
        {
            int m = l+(h-l)/2;
            if(a[m] >= low)
            {
                f1 = m; h = m-1;
            }
            else l = m+1;
        }
        l = 0, h = n-1; int f2 = -1;
        while(l <= h)
        {
            int m = l+(h-l)/2;
            if(a[m] <= high)
            {
                f2 = m; l = m+1;
            }
            else h = m-1;
        }
        if(f1 == -1 || f2 == -1) cout << 0 << ' ';
        else cout << f2-f1+1 << ' ';
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    // int t; cin >> t;
    // while(t--)
    // {
       solve();
    // }
    return 0;
}