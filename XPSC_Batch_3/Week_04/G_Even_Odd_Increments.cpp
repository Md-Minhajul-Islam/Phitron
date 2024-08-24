// Q: https://codeforces.com/problemset/problem/1744/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, q; cin >> n >> q;
        // vector<long long> e, o;
        long long sum = 0, even = 0, odd = 0;
        for(int i = 0; i < n; i++)
        {
            long long x; cin >> x;
            sum += x;
            if(x%2 == 0) even++;
            else odd++;            
        }
        while(q--)
        {
            long long type, x; cin >> type >> x;
            if(type)
            {
                sum += odd*x;
                if(x%2 == 1) even += odd, odd = 0;
            }
            else
            {
                sum += even*x;
                if(x%2 == 1) odd += even, even = 0;
            }
            cout << sum << '\n';
        }
    }
    return 0;
}