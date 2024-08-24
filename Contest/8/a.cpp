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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
 
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    cout<< min(a[n-2]-a[0], a[n-1]-a[1]) << '\n';    
    return 0;
}