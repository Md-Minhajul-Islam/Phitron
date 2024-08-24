// Q: https://www.codechef.com/problems/ALTTAB
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    stack<string> st;
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        st.push(s);
    }
    unordered_set<string> s;
    string ans = "";
    while(!st.empty())
    {
        if(s.find(st.top()) == s.end())
        {
            ans += st.top()[st.top().size()-2];
            ans += st.top()[st.top().size()-1];
            s.insert(st.top());
        }
        st.pop();
    }
    cout << ans;
    return 0;
}