#include<iostream>
using namespace std;
int main()
{
    int n,D,a[101],in,out,profit=0;
    cin>>n>>D;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    in=a[1];//30
    int status=1;
    for(int i=2;i<=n;i++)
    {
        if(status==1&&a[i]>=in+D)//賣出
        {
            status=0;
            out=a[i];
            profit+=a[i]-in;
      
        }
        if(status==0&&a[i]<=out-D)//買入
        {
            status=1;
            in=a[i]; 
        }
    }
    cout<<profit;
}