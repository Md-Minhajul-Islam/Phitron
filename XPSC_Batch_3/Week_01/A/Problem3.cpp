// Q: https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        int freq_p[26] = {0}, freq_t[26] = {0};
        int len = pat.size();
        for (int i = 0; i < len; i++)
            freq_p[pat[i] - 'a']++;
        int i = 0, j = 0, ans = 0;
        while (i < txt.size())
        {
            freq_t[txt[i] - 'a']++;
            if (i >= len - 1)
            {
                bool f = 1;
                for (int k = 0; k < 26; k++)
                    if (freq_p[k] != freq_t[k])
                    {
                        f = 0;
                        break;
                    }
                if (f)
                    ans += 1;
                freq_t[txt[j] - 'a']--;
                j++;
            }
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends