// Q: https://vjudge.net/problem/CodeForces-1095B/origin
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    if(n == 2) cout << 0;
    else
    {
        sort(a, a+n);
        int mini = a[0], maxi = a[n - 1];
        int min2 = mini, max2 = maxi;
        min2 = a[1]; max2 = a[n-2];
        cout << min(maxi - mini, min(maxi - min2, max2 - mini));
    }
    // cout << maxi << " " << mini <<" " << max2 <<" "  << min2 << endl;

    return 0;
}