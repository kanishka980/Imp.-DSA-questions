//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int> dp(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        dp[i]=arr[i];
	    }
	    
	    
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(arr[j]<arr[i])
	            {
	                dp[i]=max(dp[i], arr[i]+dp[j]);
	                
	            }
	            
	        }
	    }
	    
	    int m=0;
	    for(auto it: dp)
	    {
	        if(it>m)
	        {
	            m=it;
	        }
	    }
	    return m;
	}  
};
