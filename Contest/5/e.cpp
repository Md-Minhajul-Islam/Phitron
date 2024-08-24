// Q: 
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        vector<long long int> v;
        for(long long int i = 0; i < n; i++)
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') v.push_back(i);
        vector<long long int> v2;
        long long int ans = 1ll;
        int cnt = 0;
        for(int i = 0; i < v.size(); i++)
        {
            cnt++;
            if(cnt == k)
            {
                if(i+1 < v.size()) ans = (ans * (v[i+1]-v[i]))%mod;
                cnt = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}