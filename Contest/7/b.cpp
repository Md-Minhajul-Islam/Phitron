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
        int cnt = 0, f = 0, ii, jj;
        for(int i = 0; i < n; i++)
        {
            if(a[i] && !f) ii = i, f = 1;
            else if(f && a[i]) cnt += i - ii -1, ii = i; 
        }
        cout << cnt << '\n';
    }   
    return 0;
}