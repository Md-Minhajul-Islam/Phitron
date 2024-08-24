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
        int n; cin >> n;
        if(n%2 == 1)
        {
            for(int i = 1; i <= n; i++) cout << i << ' ';
        }
        else
        {
            for(int i = 2; i <= 2*n; i+=2) cout << i << ' '; 
        }
        cout << '\n';
    }
    return 0;
}