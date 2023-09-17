#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,x[101],y[101],max,min;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
    }
    max=abs(x[1]-x[2])+abs(y[1]-y[2]);
    min=abs(x[1]-x[2])+abs(y[1]-y[2]);
    for(int i=2;i<n;i++)
    {
        if(abs(x[i]-x[i+1])+abs(y[i]-y[i+1])<min)
        {
            min=abs(x[i]-x[i+1])+abs(y[i]-y[i+1]);
        }
        else if(abs(x[i]-x[i+1])+abs(y[i]-y[i+1])>max)
        {
            max=abs(x[i]-x[i+1])+abs(y[i]-y[i+1]);
        }
    }
    cout<<max<<" "<<min;
}