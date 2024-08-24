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
        if(k == 1 || ((n*k)%2 == 0 && ((n*k)/2)%k == 0))
        {
            cout << "YES\n";
            int cnt = 0;
            for(int i = 1; i <= n*k; i+=2)
            {
                cout << i << ' ';
                cnt++;
                if(cnt%k == 0) cout << '\n';
            }
            cnt = 0;
            for(int i = 2; i <= n*k; i += 2)
            {
                cout << i << ' ';
                cnt++;
                if(cnt % k == 0) cout << '\n';
            }
        }
        else     cout << "NO\n";
    }
    return 0;
}