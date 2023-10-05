#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        vector<char> v[n];
        int j = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'W')
            {
                j++; continue;
            }
            v[j].push_back(s[i]);
        }
        bool ans = 1;
        for(int i = 0; i < n; i++)
        {
            if(v[i].size())
            {
                bool f = 0;
                char ch = v[i][0];
                for(char c: v[i])
                {
                    if(ch != c)
                    {
                        f = 1; break;
                    }
                }
                if(f == 0){
                    ans = 0; break;
                }
            }
        }
        if(ans) cout << "YES\n";
        else cout <<"NO\n";
    }
    return 0;
}