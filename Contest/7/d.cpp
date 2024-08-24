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
 
int dp[1000000003];

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
 
    // bool check(int n, int a, int b)
    // {

    // }

    int t; cin >> t;
    while(t--)
    {
        int n, a, b; cin >> n >> a >> b;
        if(check(n, a, b)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}