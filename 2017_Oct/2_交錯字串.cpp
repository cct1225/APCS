#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int k,a[100001],b[100001]={0};
    vector<int>v;
    cin>>k;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')    a[i]=1;
        else    a[i]=0;
    }
    int wait=0;
    for(int i=0;i<s.size();i++)
    {
        if(a[i]==0) 
        {
            wait=1;
        }
        else if(a[i]==1)
        {

        }
        else
        {

        }













    }
}