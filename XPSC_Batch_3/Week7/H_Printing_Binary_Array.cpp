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
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            if(x == 0) a[i] = 1;
            else a[i] = 0;
        }
        for(int i = 0; i < n; i++) cout << a[i] <<" ";
        cout << '\n';
    }
    return 0;
}