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
 
    int t; cin >> t;
    while(t--)
    {
        int a; cin >> a;
        if(a%2 == 0 && a%7 == 0) cout <<"Alice\n";
        else if(a%2 == 1 && a%9 == 0) cout << "Bob\n";
        else cout <<"Charlie\n";
    }
    return 0;
}