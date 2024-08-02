class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        long long mi=INT_MAX;
        long long ma=INT_MIN;
        pair<long long, long long> ans;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<mi)
            {
                mi=arr[i];
            }
            if(arr[i]>ma)
            {
                ma=arr[i];
            }
            
        }
        ans.first=mi;
        ans.second=ma;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// }
