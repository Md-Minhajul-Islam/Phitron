// Q: https://practice.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1
#include <bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars(string S);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        cout << longestSubstrDistinctChars(S) << endl;
    }
}
int longestSubstrDistinctChars(string S)
{
    int cnt[27] = {0};
    int maxLen = 0;
    int i = 0, j = 0;
    while (j < S.size())
    {
        cnt[S[j] - 'a']++;
        if (cnt[S[j] - 'a'] == 1)
            maxLen = max(maxLen, j - i + 1);
        else
        {
            while (cnt[S[j] - 'a'] != 1)
            {
                cnt[S[i] - 'a']--;
                i++;
            }
        }
        j++;
    }
    return maxLen;
}