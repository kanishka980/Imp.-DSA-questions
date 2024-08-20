
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
string printSequence(string S)
{
    //code here.
   string str[]= { "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };
    
    string ans;
    for(int i=0;i<S.length();i++)
    {
        if(S[i]==' ')
        {
            ans+='0';
        }
        int pos=S[i]-'A';
        ans+=str[pos];
    }
    return ans;
    
}
