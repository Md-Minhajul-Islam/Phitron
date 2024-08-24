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
        int freq[30] = {0};
        for(int i = 0; i < n; i++)
        {
            char c; cin >> c;
            freq[c-'a']++;
        }
        int even = 0, odd = 0;
        for(int i = 0; i < 26; i++)
        {
            if(freq[i])
            {
                if(freq[i]%2) odd++;
                else even++;
            }
        }
        if(odd > 1) cout << 0;
        else if((odd == 0) || (odd == 1 && even > 0)) cout << 1;
        else cout << 2;
        cout << '\n';
    }
    return 0;
}