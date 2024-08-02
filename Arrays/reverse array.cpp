#include<iostream>
#include<vector>
using namespace std;
//using iteration
void reverse(vector<int> arr,int n)
{
    
    for(int i=n-1;i>=0;i--)
    {
       cout<<arr[i]<<" ";
    }
    

}
//using recursion
void reversal(vector<int> &arr,int start,int end)
{
   
    if(start>=end)
    {
        return ;
    }
    //swapping
    swap(arr[start], arr[end]);
    reversal(arr, start+1, end-1);
}
int main()
{
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    cout<<"reversed array is"<<endl;
    reversal(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;



}
