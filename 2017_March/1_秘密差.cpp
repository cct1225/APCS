#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    string s;
    int odd=0,even=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==1)
        {
            even+=s[i]-'0';
        }
        else    odd+=s[i]-'0';
    }
    cout<<abs(odd-even);




}