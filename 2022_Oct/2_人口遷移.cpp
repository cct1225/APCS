#include<iostream>
using namespace std;
int main()
{
    int r,c,k,m,a[101][101],b[101][101],num;
    cin>>r>>c>>k>>m;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int d=0;d<m;d++)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                b[i][j]=0;
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                num=a[i][j]/k;
                if(a[i][j]==-1)  continue;
                if(i!=0)
                {
                    if(a[i-1][j]!=-1)
                    {
                        b[i-1][j]+=num;
                        a[i][j]-=num;
                    }
                }
                if(j!=0)
                {
                    if(a[i][j-1]!=-1)
                    {
                        b[i][j-1]+=num;
                        a[i][j]-=num;
                    }
                }
                if(i!=r-1)
                {
                    if(a[i-1][j]!=-1)
                    {
                        b[i+1][j]+=num;
                        a[i][j]-=num;
                    }
                }
                if(j!=c-1)
                {
                    if(a[i][j+1]!=-1)
                    {
                        b[i][j+1]+=num;
                        a[i][j]-=num;
                    }
                } 
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(a[i][j]!=-1)
                {
                    a[i][j]+=b[i][j];
                } 
            }
        }
    }
    int max=a[0][0];
    int min=a[0][0];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]!=-1)
            {
                if(a[i][j]>max) max=a[i][j];
                else if(a[i][j]<min)    min=a[i][j];
            }
        }
    }
    cout<<min<<endl<<max;


}
    