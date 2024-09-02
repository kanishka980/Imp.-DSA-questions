#include<iostream>
using namespace std;
#include<string>
int compute(string s)
{
    int result=s[0] -'0';
    for(int i=1;i<s.length();i+=2)
    {
        if(i+1<s.length())
        {
            int x=s[i+1]-'0';
            if(s[i]=='A')
            {
                
                result&=x;
            }
            else if(s[i]=='B')
            {
                result|=x;
            }
            else if(s[i]=='C')  
            {
                result^=x;

            }

        }
        
    }
    return result;

}
int main()
{
    string s="1C0B1A0C1";
    cout<<"string is "<<s<<endl;
    cout<<compute(s);
    return 0;

}
