#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,total,a[6],b[6],cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int max=b[0];
    int times=a[0];
    for(int i=0;i<n;i++)
    {
        if(b[i]==-1)    cnt++;
        if(b[i]>max)
        {
            max=b[i];
            times=a[i];
        }
    }
    sort(b,b+n);
    total=b[n-1]-n-(cnt*2);
    if(total<0) total=0;
    cout<<total<<" "<<times;
}
