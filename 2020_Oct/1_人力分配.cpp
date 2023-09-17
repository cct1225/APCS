#include<iostream>
using namespace std;
int main()
{
    int y1,y2,a1,b1,c1,a2,b2,c2,n;
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;
    cin>>n;
    int max=a1*n*n+b1*n+c1+c2;
    for(int i=1;i<=n;i++)
    {
        y1=a1*(n-i)*(n-i)+b1*(n-i)+c1;
        y2=a2*(i)*(i)+b2*(i)+c2;
        if(y1+y2>max)   max=y1+y2;
    }
    cout<<max;
}