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
        string s; cin >> s;
        stack<char> stk;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'B' && !stk.empty()) stk.pop();
            else stk.push(s[i]);
        }
        cout << stk.size() << '\n';
    }
    return 0;
}