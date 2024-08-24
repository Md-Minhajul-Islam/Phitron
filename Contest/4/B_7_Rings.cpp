// Q: 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, x; cin >> n >> x;
        int ans = n*x;
        string s = to_string(ans);
        if(s.size() == 5) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}