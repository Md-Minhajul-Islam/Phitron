// Q: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int q; cin >> q;
    while(q--)
    {
        int x; cin >> x;
        int left = -1, right = -1;
        int l = 0, r = n-1;
        while (l <= r)
        {
            int m = l + (r-l) / 2;
            if (a[m] < x) left = a[m], l = m+1;
            else r = m-1;
        }
        l = 0, r = n-1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (a[m] > x) right = a[m], r = m-1;
            else l = m+1;
        }
        if(left == -1) cout << 'X';
        else cout << left;
        cout << ' ';
        if(right == -1) cout << 'X';
        else cout << right;
        cout << '\n';
    }

    return 0;
}