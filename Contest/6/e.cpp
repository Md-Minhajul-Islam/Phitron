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
        int n; cin >> n; int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        int add = 0, om = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(b[i] > 0) cnt++;
            else{
                add = max(add, cnt); 
                cnt = 0;
            }
        }
        add = max(add, cnt);
        cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] > 0) cnt++;
            else 
            {
                om = max(om, cnt);
                cnt = 0;
            }
        }
        om = max(om, cnt);
        if(om > add) cout << "Om\n";
        else if(add > om) cout <<"Addy\n";
        else cout << "Draw\n";

    }
    return 0;
}