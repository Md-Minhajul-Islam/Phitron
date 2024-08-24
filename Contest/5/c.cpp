// Q: 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        int om = 0, add = 0, cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0) om = max(om, cnt), cnt = 0;
            else cnt++;
        }
        om = max(cnt, om);
        cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(b[i] == 0) add = max(add, cnt), cnt = 0;
            else cnt++;
        }
        add = max(cnt, add);
        if(om > add) cout <<"Om\n";
        else if(om < add) cout << "Addy\n";
        else cout << "Draw\n";
    }
    return 0;
}