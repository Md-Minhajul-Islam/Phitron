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
        int mn = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i]; 
            mn = min(mn, a[i]);
        }
        int mn2 = mn;
        do
        {
            mn = mn2;
            for(int i = 0; i < n; i++)
                mn2 = min(mn2, a[i]&mn2);
        }while(mn != mn2);
        cout << mn << '\n';
    }
    return 0;
}