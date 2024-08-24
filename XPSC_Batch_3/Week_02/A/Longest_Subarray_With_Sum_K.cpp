// Q: https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?leftPanelTab=1
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    // Write your code here
    int ans = 0;
    int i = 0, j = 0;
    long long sum = 0;
    int l = a.size();
    while (i < l && j < l)
    {
        sum += a[j];
        while (sum > k)
        {
            sum -= a[i];
            i++;
        }
        if (sum == k)
            ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}