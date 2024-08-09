class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {

        // Your code here
        int low=0;
        int high=n-1;
        int res=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(v[mid]==x)
            {
                return mid;
            }
            else if(v[mid]<x)
            {
                res=mid;
                low=mid+1;
            }
            else
            {
                
                high=mid-1;
            }
        }
        return res;
    }
};
