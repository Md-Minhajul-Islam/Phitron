// Q: 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        int om = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] > 0) ans += 1;
            else ans = 0;
            om = max(om, ans);

        }
        int addy = 0; ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(b[i] > 0) ans += 1;
            else  ans = 0;
            addy = max(addy, ans);
        }
        if(om > addy) cout << "Om\n";
        else if(om < addy) cout << "Addy\n";
        else cout << "Draw\n";
    }
    return 0;
}