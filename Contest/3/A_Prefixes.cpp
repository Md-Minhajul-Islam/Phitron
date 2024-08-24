// Q: https://vjudge.net/contest/589696#problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; char a[n+1];
    int cnt_a = 0, cnt_b = 0;
    vector<int> ind_a, ind_b;
    int act = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(a[i] == 'a')
        {
            cnt_a++; ind_a.push_back(i);
        }
        else
        {
            cnt_b++; ind_b.push_back(i);
        }
        if(i%2 == 0)
        {
            if(cnt_a != cnt_b)
            {
                if(cnt_a > cnt_b)
                {
                    int k = cnt_a-cnt_b-1;
                    act += k;
                    int i = ind_a.size()-1;
                    while(k--)
                    {
                        a[ind_a[i]] = 'b';
                        ind_a.pop_back();
                        i--;
                    }
                }
                else
                {
                    int k = cnt_b - cnt_a - 1;
                    act += k;
                    int i = ind_b.size() - 1;
                    while (k--)
                    {
                        a[ind_b[i]] = 'a';
                        ind_b.pop_back();
                        i--;
                    }
                }
                cnt_a = cnt_b = 0;
            }
        }
    }
    cout << act << '\n';
    for(int i = 1; i <= n; i++) cout << a[i];
    return 0;
}