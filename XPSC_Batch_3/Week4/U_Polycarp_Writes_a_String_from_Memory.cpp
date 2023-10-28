// Q: https://codeforces.com/problemset/problem/1702/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int i = 0, ans = 0;
        unordered_set<char> st;
        while(i < s.size())
        {

            st.insert(s[i]);
            if (st.size() > 3)
            {
                st.clear(); ans += 1;
                st.insert(s[i]);
            }
            i++;
        }
        if(!st.empty()) ans += 1;
        cout << ans << '\n';
    }
    return 0;
}