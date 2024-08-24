// Q: 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long int w, l; cin >> w >> l;
        long long mul = w*l;
        if(mul%2 == 0) cout <<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}