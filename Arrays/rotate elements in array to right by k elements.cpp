class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> store(n);
        k%=n;
        for(int i=0;i<n;i++)
        {
            store[(i+k)%n]=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=store[i];
        }
        
    }
};
