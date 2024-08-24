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
    int n; cin >>n;
    vii v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    if(n%2) cout << "NO";
    else
    {
        sort(v.begin(), v.end());
        vii 
        v2;
        int cnt = n/2, i = 0, j = n/2;
        while(cnt--)
        {
            v2.push_back(v[i]);
            v2.push_back(v[j]);
            i++, j++;
        }
        int f = 1;
        for(int i = 1; i < n - 1; i++)
        {
            if((v2[i] < v2[i - 1] && v2[i] < v2[i + 1]) || (v2[i] > v2[i - 1] && v2[i] > v2[i + 1])) continue;
            f = 0; break;
        }
        if(v2[n-1] <= v2[0]) f = 0;
        if(f)
        {
            cout << "YES\n";
            for(auto x : v2)
                cout << x << ' ';
        }
        else cout << "NO";
    }
    cout <<'\n';

}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}