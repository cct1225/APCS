#include<iostream>
using namespace std;
int main()
{
    int a,b;//observe
    int n;//customer
    int cnt=0;
    cin>>a>>b;
    cin>>n;
    int t;
    for(int i=0;i<n;i++)
    {
        int status_a=0,status_b=0;
        while(cin>>t)//purchase
        {
            if(t==0)    break;
            if(t==a)    status_a+=t;
            if(t==-a)   status_a+=t;
            if(t==b)    status_b+=t;
            if(t==-b)    status_b+=t;
        }
        if(status_a>0&&status_b>0)  cnt++;
    }
    cout<<cnt;
}