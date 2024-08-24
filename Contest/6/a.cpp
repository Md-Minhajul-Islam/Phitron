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
 
    int t; cin >> t;
    while(t--)
    {
        int a[3], b[3];
        cin >> a[0] >> a[1] >> a[2];
        cin >> b[0] >> b[1] >> b[2];
        sort(a, a+3); sort(b, b+3);
        int f = 1;
        for(int i = 2; i >= 0; i--)
        {
            if(a[i] > b[i]) 
            {
                cout << "Alice\n"; f = 0; break;
            }
            else if(a[i] < b[i])
            {
                cout << "Bob\n"; f = 0; break;
            }
        }
        if(f) cout << "Tie\n";
    }
    return 0;
}