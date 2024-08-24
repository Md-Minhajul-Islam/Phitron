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
 
void solve()
{
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '+') cnt++;
    if(cnt == 1 && s.size() == 14 && s[0] == '+' && s[1] == '8' && s[2] =='8' && s[3] == '0' && s[4] == '1' && s[5] != '0' && s[5] != '1')
        	cout << "YES\n";
    else cout << "NO\n";

}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}