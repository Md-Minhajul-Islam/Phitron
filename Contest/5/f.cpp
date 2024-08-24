// Q: 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            int m, li; cin >> m >> li;
            if(li == l) v.push_back(m);
        }
        if(k > v.size()) cout << -1 << '\n';
        else
        {
            sort(v.begin(), v.end());
            int ans = 0;
            for(int i = v.size()-1, j = 0; j < k; i--, j++)
            {
                ans += v[i];
            }
            cout << ans << '\n';
        }
    }
    return 0;
}