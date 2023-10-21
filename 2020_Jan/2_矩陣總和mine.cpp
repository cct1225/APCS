#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int s,t,n,m,r,suma,sumb;
int A[101][101],B[101][101];
int Cal(int r,int c)
{
    int found=0;
    for(int i=r;i<r+s;i++)
    {
        for(int j=c;j<c+t;j++)
        {
            if(A[i-r][j-c]!=B[i][j])    found++;
        }
    }
    return found;
}
int sum(int r,int c)
{
    int suma=0,sumb=0;
    for(int i=r;i<r+s;i++)
    {
        for(int j=c;j<c+t;j++)
        {
            sumb+=B[i][j];
            suma+=A[i-r][j-c];
        }
    }
    return  abs(sumb-suma);
}
int main()
{
    cin>>s>>t>>n>>m>>r;
    vector<int>v;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<t;j++)
        {
            cin>>A[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>B[i][j];
        }
    }
    int count=0;
    int k=1e9;
    for(int i=0;i<=n-s;i++)
    {
        for(int j=0;j<=m-t;j++)
        {
            if(Cal(i,j)<=r) 
            {
                count++;
                k=min(k,sum(i,j));
            }
        }
    }
    cout<<count<<endl;
    if(count!=0)
    {
        cout<<k;
    }
    else    cout<<"-1";
    

}