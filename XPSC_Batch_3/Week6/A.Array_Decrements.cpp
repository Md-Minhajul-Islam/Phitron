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
        int n; cin >> n; int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        int tem1 = 0, tem2 = -1, f = 1;
        vii dis;
        for(int i = 0; i < n; i++)
        {
            if(a[i] < b[i]){f = 0; break;}
            if(b[i] == 0) 
            {
                tem1 = max(tem1, a[i] - b[i]); continue;
            }
            int dis = a[i]-b[i];
            if(tem2 == -1) tem2 = dis;
            else if(dis != tem2){f = 0; break;}
        }
        if(tem2 != -1 && tem1 > tem2) f = 0;
        if(f) cout <<"YES\n";
        else cout <<"NO\n";
    }
    return 0;
}