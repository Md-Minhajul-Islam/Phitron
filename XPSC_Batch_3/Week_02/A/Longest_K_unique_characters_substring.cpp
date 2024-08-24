// Q: https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        // your code here
        unordered_map<char, int> m;
        int maxLen = -1, unique = 0;
        for (int i = 0, j = 0; j < s.size(); j++)
        {
            m[s[j]]++;
            if (m[s[j]] == 1)
                unique++;
            if (unique == k)
                maxLen = max(maxLen, j - i + 1);

            while (unique > k)
            {
                m[s[i]]--;
                if (m[s[i]] == 0)
                    unique--;
                i++;
            }
        }
        return maxLen;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}