#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    long int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    if(a[0]+a[1]<=a[2]) 
    {
        cout<<"No";
    } 
    else if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2])
    {
        cout<<"Obtuse";
    }
    else if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
    {
        cout<<"Right";
    }
    else if(a[0]*a[0]+a[1]*a[1]>a[2]*a[2])
    {
        cout<<"Acute";
    }





}