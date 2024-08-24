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
        int n; cin >> n; int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        bool f = 1;
        for(int i = 0; i < n-2; i++)
        {
            for(int j = i+1; j < n-1; j++)
            {
                int x = a[j]-a[i];
                for(int k = j+1; k < n; k++)
                {
                    if(a[k]-a[j] == x)
                    {
                        f = 0; break;
                    }
                }
                if(!f) break;
            }
            if(!f) break;
        }
        if(f) cout <<"Yes\n";
        else cout <<"No\n";
    }
    return 0;
}