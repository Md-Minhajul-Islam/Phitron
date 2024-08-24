// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<char, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair

vector<pii> fun(string s)
{
    vector<pii> v;
    int i = 0;
    while(i < s.size())
    {
        int cnt = 0, j = i;
        while(j < s.size() && s[i] == s[j])
            cnt++, j++;
        v.pb({s[i], cnt});
        i = j;
    }
    return v;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n; cin >> n;
    while(n--)
    {
        string s1, s2; cin >> s1 >> s2;
        vector<pii> v1, v2;
        v1 = fun(s1);
        v2 = fun(s2);
        bool f = false;
        if(v1.size() == v2.size())
        {
            int i = 0;
            while(i < v1.size() && v1[i].first == v2[i].first && v1[i].second <= v2[i].second) i++;
            if(i == v1.size()) f = true;
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}