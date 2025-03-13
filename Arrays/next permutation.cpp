class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                pivot=i;
                break;
            }
        }
        if(pivot==-1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=n-1;i>pivot;i--)
        {
            if(nums[i]>nums[pivot])
            {
                swap(nums[i], nums[pivot]);
                break;
            }
        }
        int k=pivot+1;
        int m=n-1;
        while(k<=m)
        {
            swap(nums[k++], nums[m--]);
        }
        //reverse(nums.begin()+pivot+1,nums.end());
    }
};
