//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        
        
        int n=arr.size();
        vector<int> store(n);
        d=d%n;
        int k=n-d;
        for(int i=0;i<n;i++)
        {
            store[(k+i)%n]=arr[i];
            
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=store[i];
        }
        
    }
};



