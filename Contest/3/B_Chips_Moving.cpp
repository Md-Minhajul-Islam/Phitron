// Q: https://vjudge.net/problem/CodeForces-1213A/origin
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x%2 == 0) even++;
        else odd++;
    }
    cout << min(even, odd);
    return 0;
}