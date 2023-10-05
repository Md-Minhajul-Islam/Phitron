#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n];
        long long ans = 0, mini = INT_MAX;
        for(int i = 0; i < n ; i++)
        {
            cin >> a[i];
            if(mini > a[i]) mini = a[i];
        }
        for(int i = 0; i < n; i++)
        {
            ans += a[i]-mini;
        }
        cout << ans <<"\n";
    }
    return 0;
}