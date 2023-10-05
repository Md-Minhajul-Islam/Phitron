#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; int a[200005] = {0};
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            a[x]++;
        }
        int flag = -1;
        for(int i = 0; i <= n; i++)
        {
            if(a[i] > 2)
            {
                flag = i; break;
            }
        }
        cout << flag <<"\n";
        
    }
    return 0;
}