// Q: https://vjudge.net/problem/CodeForces-977B/origin
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    map<string, int> m;
    for(int i = 1; i < n; i++)
    {
        string t = "";
        t += s[i-1];
        t += s[i];
        m[t]++;
    }
    string ans; int max = 0;
    for(auto i: m)
    {
        if(i.second > max)
        {
            max = i.second;
            ans = i.first;
        }
    }
    cout << ans;
    return 0;
}