#include<iostream>
#include<string>
using namespace std;
int main()
{
    int k,a[100001],b[100001]={0};
    cin>>k;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')    a[i]=1;
        else    a[i]=0;
    }
    for(int i=0;i<s.size();i++)
    {
        if(a[i]!=a[i+1])
        {
            b[i]=1;
            b[i+1]=1;
        }

    }
}