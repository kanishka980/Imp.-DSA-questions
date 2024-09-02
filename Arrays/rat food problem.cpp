

#include<iostream>
using namespace std;
#include<string>
#include<vector>
int food(vector<int> & arr, int n, int r, int unit)

{
    int required=r*unit;
    int have=0;
    int i=0;
    while(have<required)
    {
        have+=arr[i];
        i++;
        
    }
    return i;
    
}
int main()
{
    vector<int> arr={ 2, 8, 3, 5 ,7, 4, 1, 2};
    int r=7;
    int unit=2;
    int n=arr.size();
    cout<<food(arr, n,r, unit);
    return 0;
}
