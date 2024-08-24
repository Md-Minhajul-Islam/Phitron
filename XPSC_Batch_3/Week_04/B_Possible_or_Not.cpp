// Q: https://www.codechef.com/problems/CS2023_PON?tab=statement
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, b; cin >> n >> b;
        int curr = -1; // binary of -1 = 1111 (using 2's compliment)
        while(n--)
        {
            int x; cin >> x;
            if((x&b) == b)
                curr &= x;
        }
        if(curr == b) cout <<"YES\n";
        else cout <<"NO\n";
    }
    return 0;
}