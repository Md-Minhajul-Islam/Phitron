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
        int a, b, c; cin >> a >> b >> c;
        int f;
        if(abs(a-1) < abs(b-c)+abs(c-1)) f = 1;
        else if(abs(a-1) > abs(b-c)+abs(c-1)) f = 2;
        else f = 3;
        cout << f << '\n';
    }
    return 0;
}