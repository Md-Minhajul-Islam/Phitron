// Q: 
#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, string>
int check(string a, string b)
{
    for(int i = 0; i < a.size(); i++)
    {
        int j = 0;
        while(j < b.size() && a[i+j] == b[j]) j++;
        if(j == b.size()) return 1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    priority_queue<pii> q;
    priority_queue<pii, vector<pii>, greater<pii>> pq; 
    int n; cin >> n;
    while(n--)
    {
        string s; cin >> s;
        q.push({s.length(), s});
        pq.push({s.length(), s});
    }
    int flag = 1; 
    while(!q.empty())
    {
        string parent, child;
        parent = q.top().second;
        q.pop();
        if(!q.empty())
        {
            child = q.top().second;
            flag = check(parent, child);
        }
        if(flag == 0) break;
    }
    if(flag)
    {
        cout << "YES\n";
        while(!pq.empty())
        {
            cout << pq.top().second <<"\n";
            pq.pop();
        }
    }
    else cout <<"NO";
    return 0;
}