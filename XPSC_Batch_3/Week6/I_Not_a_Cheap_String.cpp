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
        string s1; cin >> s1;
        int n; cin >> n;
        string s2 = s1; sort(s2.begin(), s2.end());
        int sum = 0, i = 0;
        map<char, int> m;
        while(sum+(s2[i]-'a')+1 <= n && i < s2.size())
        {
            sum += (s2[i]-'a')+1;
            m[s2[i]]++;
            i++;
        }
        string ans = "";
        for(int i = 0; i < s1.size(); i++)
        {
            if(m[s1[i]])
            {
                ans += s1[i]; m[s1[i]]--;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}