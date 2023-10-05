#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int flag1 = a[0]%2, flag2 = a[1]%2;
        int ans = 1;
        for(int i = 0; i < n; i+=2)
        {
            if(flag1 != a[i]%2)
            {
                ans = 0; break;
            }
        }
        for(int i = 1; i < n; i+=2)
        {
            if(flag2 != a[i]%2)
            {
                ans = 0; break;
            }
        }
        if(ans) cout << "YES\n";
        else cout <<"NO\n";        
    }
    return 0;
}