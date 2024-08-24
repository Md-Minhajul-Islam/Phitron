#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void precompute()
{
    for(int i = 0; i < (1 << 15); i++)
    {
        string s1, s2;
        s1 = s2 = to_string(i);
        reverse(s2.begin(), s2.end());
        if(s1 == s2) v.push_back(i);
    }
}
int main()
{
    precompute();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        unordered_map<int, int> m;
        long long ans = 0;
        for(int i = 0; i < n; i++)
        {
            m[a[i]]++;
            for(int j = 0; j < v.size(); j++)
            {
                int x = a[i] ^ v[j];
                ans += m[x];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}