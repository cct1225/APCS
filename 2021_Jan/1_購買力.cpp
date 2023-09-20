#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,d,a[3],total=0,cnt=0;
    cin>>n;
    cin>>d;
    for(int i=1;i<=n;i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[2]-a[0]>=d)
        {
            cnt++;
            total+=(a[0]+a[1]+a[2])/3;
        }
    }
    cout<<cnt<<" "<<total;
}