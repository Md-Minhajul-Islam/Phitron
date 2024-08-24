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
    
    int cnt = 1;
    map<string, int> m;
    for(char i = 'a'; i <= 'z'; i++)
        for(char j = 'a'; j <= 'z'; j++)
        {
            if(i == j) continue;
            string s; s += i; s += j;
            m[s] = cnt; cnt++;
        }
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        cout << m[s] <<'\n';
    }

    return 0;
}