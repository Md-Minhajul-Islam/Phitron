class Solution
{
public:
    // Q: https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        long long sum = 0;
        for (int i = 0; i < K; i++)
            sum += Arr[i];
        long long max = sum;
        for (int i = K, j = 0; i < N; i++, j++)
        {
            sum = sum - Arr[j] + Arr[i];
            if (max < sum)
                max = sum;
        }
        return max;
    }
};