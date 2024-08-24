// Q: 
#include<bits/stdc++.h>
using namespace std;
string fun(int b)
{
    string s = "";
    while(b)
    {
        s = s+ to_string(b%2);
        b /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, b; cin >> n  >> b;
        unordered_set<int> st;
        for(int i = 0; i < n; i++) 
        {
            int x; cin >> x; 
            st.insert(x); 
        }
        string s = fun(b);
        int cnt = 0, f = 1;

        for(int i = s.size()-1; i >= 0; i--)
        {
            unordered_set<int> remove;
            if(s[i] == '1')
            {
                for(auto set : st)
                {
                    int x = set & (1 << cnt);
                    if(x != 1)
                    {
                        remove.insert(set);
                        cout << set <<"\n";
                    }
                }
                for(auto x: remove)
                    st.erase(x);
            }
            cnt++;
        }
        if(st.size() == 0) f = 0;
        else
        {
            cout << "YESss\n";
            cnt  = 0;
            for(int i = s.size() - 1; i >= 0; i--)
            {
                if(s[i] == '0')
                {
                    int c = 0;
                    for(auto set : st)
                    {
                        int x = set & (1 << cnt);
                        if(x == 0) c++;
                    }
                    if(c == 0) {
                        f = 0; break;
                    }
                }
                if(!f) break;
                cnt++;
            }
        }
            // else
            // {
            //     int c = 0;
            //     for(auto set: st)
            //     {
            //         int x = set & (1 << cnt);
            //         if(x == 0) c++;
            //     }
            //     if(c == 0){
            //         f = 0; break;
            //     }
            // }
        //     if(!f) break;
        //     cnt++;
        // }
        if(f) cout << "YES\n";
        else cout <<"NO\n";
        // for(auto x: remove)
        // {
        //     cout << x << "\n";
        // }
        // for(auto set: st)
        // {
        //     cout << set << '\n';
        // }
    }
    return 0;
}