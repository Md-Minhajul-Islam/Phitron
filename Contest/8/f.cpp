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
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int cnt[30] = {0};
    for(int i = 0; i < n; i++)
    {
        cnt[s[i]-'a']++;
    }    
    
    int i = 0;
    while(k || i < 26)
    {
        if(k >= cnt[i])
        {
            k -= cnt[i];
            cnt[i] = 0;
        }
        else{
            cnt[i] -= k;
            k = 0;
        }
        i++;
    }
    // cout << k << ' ' << cnt[0] << '\n';
    string st = " ";
    for(int i = n-1; i >= 0; i--)
    {
        if(cnt[s[i]-'a'])
        {
            st += s[i];
            cnt[s[i]-'a']--;
        }
    }
    if(st == " ") cout << '\n';
    else 
    {
        reverse(st.begin(), st.end());
        cout << st <<'\n';
    }
    return 0;
}