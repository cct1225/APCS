#include<iostream>
using namespace std;
int main()
{
    int n,m,a[101][101],xstart,ystart;
    int min=1e9;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]<min) 
            {
                min=a[i][j];
                xstart=i;
                ystart=j;
        }
    }

    for(int i=xstart;)

}