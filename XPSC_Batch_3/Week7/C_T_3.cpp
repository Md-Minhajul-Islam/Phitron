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
 
    ll a, b; cin >> a >> b;
    int n = (b-a+1)/2;
    cout << "YES\n";
    while(n--)
    {
        cout << a << " " << a+1 <<'\n';
        a += 2;
    }
    return 0;
}