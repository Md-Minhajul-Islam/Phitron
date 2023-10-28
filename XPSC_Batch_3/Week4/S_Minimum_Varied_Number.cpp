// Q: https://codeforces.com/problemset/problem/1714/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        vector<int> v;
        int s; cin >> s;
        int i = 9;
        while(i > 0)
        {
            if(s >= i)
            {
                s -= i; v.push_back(i);
            }
            i--;
        }
        for(int i = v.size()-1; i >= 0; i--) cout << v[i];
        cout << '\n'; 
    }
    return 0;
}