// Q: https://vjudge.net/problem/CodeForces-1108B/origin
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; int a[n];
    for(int i =  0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    bool visited[10005] = {0};
    int ans1 = a[n-1];
    for(int i = 0; i < n; i++)
    {
        if(ans1%a[i] == 0 && !visited[a[i]])
            visited[a[i]] = 1, a[i] = -1;
    }
    sort(a, a+n);
    int ans2 = a[n-1];
    cout << ans1 <<" "<<ans2 <<'\n';
    return 0;
}