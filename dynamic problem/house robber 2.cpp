class Solution {
public:
    int helper(vector<int>& a) {
        int n = a.size();
        vector<int> dp(n);
        dp[0] = a[0];
        dp[1] = max(a[0], a[1]);
        for (int j = 2; j < n; j++) {
            dp[j] = max(dp[j - 2] + a[j], dp[j - 1]);
        }
        return dp[n - 1];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return nums[0];
        }
        if (n == 2) {
            return max(nums[0], nums[1]);
        }
        if (n == 3) {
            return max(nums[0], max(nums[1], nums[2]));
        }
        vector<int> skipfirst(n - 1);
        vector<int> skiplast(n - 1);
        for (int i = 0; i < n - 1; i++) {
            skiplast.push_back(nums[i]);
            skipfirst.push_back(nums[i + 1]);
        }

        int n1 = helper(skiplast);
        int n2 = helper(skipfirst);

        return max(n1, n2);
    }
};
