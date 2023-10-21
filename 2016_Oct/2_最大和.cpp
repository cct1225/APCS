#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,a[21][21],sum=0,cnt=0;
    cin>>n>>m;
    int b[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        sort(a[i], a[i] + m); // Fixed this line
        sum += a[i][m - 1]; // Fixed this line
        b[i] = a[i][m - 1];
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++)
    {
        if(sum%b[i]==0) 
        {
            if(cnt!=0)  cout<<" ";  
            cout<<b[i];
            cnt++;
        }
    }
    if(cnt==0)  cout<<"-1";

}