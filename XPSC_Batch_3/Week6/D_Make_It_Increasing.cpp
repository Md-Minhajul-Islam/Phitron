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
        for(int i = 0; i < n; i++) cin >> a[i];
        int cnt = 0;
        for(int i = n-2; i >= 0; i--)
        {
            if(a[i] < a[i+1]) continue;
            while(a[i] >= a[i+1] && a[i] != 0) a[i] /= 2, cnt++;
        }
        for(int i = 0; i < n-1; i++)
        {
            if(a[i] >= a[i+1]){cnt = -1; break;}
        }
        cout << cnt  << '\n';
    }
    return 0;
}