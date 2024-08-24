// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair

int n, m;
string s, t;

int lcs(int i, int j, int k)
{
    if(i == n && j == m)
    {
        return k/2;
    }
    if(s[i] == t[j]) return (1+lcs(i+1, j+1, k));
    else
    {
        int op1 = 0, op2 = 0, op3 = 0, op4 = 0;
        if(i+1 < n) op1 = lcs(i+1, j, k);
        if(j+1 < m) op2 = lcs(i, j+1, k);
        if(i+1 < n) op3 = 1+lcs(i+1, j, k-1);
        if(j+1 < m) op4 = 1+lcs(i, j+1, k-1);
        return max(max(op1, op2), max(op3, op4));
    }
}
void solve()
{
    int k;
    cin >> n >> m >> k;
    cin >> s >> t;
    cout << lcs(0, 0, k) << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    // int t; cin >> t;
    // while(t--)
    // {
       solve();
    // }
    return 0;
}