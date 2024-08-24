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
 
    int n; cin >> n;
    string s = ""; char ch = 'a';
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        s += ch; cnt++;
        if(cnt == 2) ch = 'b';
        if(cnt == 4) ch = 'c';
        if(cnt == 5) ch = 'a', cnt = 0;
    }
    cout << s << '\n';
    return 0;
}