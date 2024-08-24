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
        int cnt[1500] = {0};
        int n; cin >> n;
        for(int i = 0; i < 2*n; i++)
        {
            int x;  cin >> x;
            cnt[x]++;
        }
        int m = 0;
        for(int i = 0; i < 1500; i++)
        {
            m = max(m, cnt[i]);
        }
        cout << m << '\n';
    }
    return 0;
}