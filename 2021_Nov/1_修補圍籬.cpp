#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101],cost=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            if(i==0)
            {
                cost+=a[i+1];
            }
            else if(i==n-1)
            {
                cost+=a[i-1]; 
            }
            else cost+=min(a[i-1],a[i+1]);
        }
        
    }
    cout<<cost;
}
