#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[21],yes=0,no=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=60)    yes++;
        else    no++;
    }
    sort(a,a+n);
    int min=a[0];
    int max=a[n-1];
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
        if(a[i]<60&&a[i]>min)  min=a[i]; 
        if(a[i]>=60&&a[i]<max)  max=a[i];
    }
    cout<<endl;
    if(yes==n)  cout<<"best case";
    else    cout<<min;
    cout<<endl;
    if(no==n)   cout<<"worst case";
    else    cout<<max;







}