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
        int cnt = 0;
        while(n != 50)
        {
            if(n > 50) n -= 3, cnt += 1;
            else if(n < 50 && (50-n)%2 == 0)
            {
                cnt += (50 - n) / 2; break;
            }
            else n += 2, cnt += 1;
        }
        cout << cnt <<'\n';
    }
    return 0;
}