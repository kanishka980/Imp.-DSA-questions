//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string ans;
        ans+=S[0];
        for(int i=1;i<S.length();i++)
        {
            if(S[i]==S[i-1])
            {
                continue;
                
                
            }
            ans+=S[i];
            
        }
        return ans;
    }
};

