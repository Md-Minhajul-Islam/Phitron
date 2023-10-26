// Q: https://codeforces.com/problemset/problem/1741/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string a, b; cin >> a >> b;
        char ans;
        if(a[a.size()-1] == b[b.size()-1])
        {
            char c = a[a.size()-1];
            if(a.size() == b.size()) ans = '=';
            else if(c == 'S')
            {
                if(a.size() > b.size()) ans = '<';
                else ans = '>';
            }
            else
            {
                if(a.size() > b.size()) ans = '>';
                else ans = '<';
            }
        }
        else
        {
            if(a[a.size()-1] == 'L') ans = '>';
            else if(a[a.size()-1] == 'S') ans = '<';
            else if(b[b.size()-1] == 'L') ans = '<';
            else ans = '>';
        }
        cout << ans <<'\n';
    }
    return 0;
}