#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int r,c,m,a[11][11],action,b[11][11],d[10];
    cin>>r>>c>>m;

        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                cin>>a[i][j];
            }   
        } 
        for(int i=0;i<m;i++)
        {
            cin>>d[i];
        }
        for(int j=m-1;j>=0;j--)
        {
            if(d[j]==0)// 旋轉-90度
            {
                for(int k=1;k<=r;k++)
                {
                    for(int n=1;n<=c;n++)
                    {
                        b[c+1-n][k]=a[k][n];
                    }
                }
                swap(r,c);//it's crucial
            }
            else // 翻轉
            {
                for(int k=1;k<=r;k++)
                {
                    for(int n=1;n<=c;n++)
                    {
                        b[r+1-k][n]=a[k][n];
                    }
                }
            }
        // Copy b back 
        for(int x = 1; x <= r; x++)
        {
            for(int y = 1; y <= c; y++)
            {
                a[x][y] = b[x][y];
            }
        }
        
    }
    cout<<r<<" "<<c<<endl;
    for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                cout<<a[i][j];
                if(j!=c)    cout<<" ";
            }
            cout<<endl;
        }
    
}

     
        





