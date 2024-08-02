//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long min = LLONG_MAX;
    for(long long j=0;j+m-1<n;j++)
    {
        long long diff=a[j+m-1]-a[j];
        if(diff<min)
        {
            min=diff;
        }
        
    }
    return min;
    
    }   
};


