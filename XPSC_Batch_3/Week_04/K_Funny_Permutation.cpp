// Q: https://codeforces.com/problemset/problem/1741/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n];
        if(n == 3) cout << -1;
        else
        {
            if(n%2 == 0) for(int i = n; i > 0; i--) cout << i << " ";
            else
            {
                for(int i = 0; i < n/2; i++) cout << n-i <<" ";
                for(int i = 1; i <= n/2+1; i++) cout << i <<" ";
            }
        }
        cout << '\n';
    }
    return 0;
}