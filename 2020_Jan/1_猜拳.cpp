#include<iostream>
using namespace std;
int main()
{
    int F,n,a[12],b[12],record; //a妹 b哥
    cin>>F;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    b[1]=F;
    for(int i=1;i<=n;i++)
    {
        if(i>1)
        {
            if(a[i-2]==a[i-1])
            {
                if(a[i-1]==2)   b[i]=0;   
                else if(a[i-1]==0)   b[i]=5;  
                else if(a[i-1]==5)   b[i]=2;  
            }
            else    b[i]=b[i-1];
        }
        if(b[i]==2&&a[i]==5||b[i]==5&&a[i]==0||b[i]==0&&a[i]==2)//哥贏
        {
            for(int j=1;j<=i;j++)
            {
                cout<<b[j]<<" ";
            }
            cout<<": Won at round "<<i;
            break;
        }
        else if(b[i]==2&&a[i]==2||b[i]==5&&a[i]==5||b[i]==0&&a[i]==0)//哥平手
        {
           if(i==n) 
           {
                for(int j=1;j<=i;j++)
                {
                    cout<<b[j]<<" ";
                }
                cout<<": Drew at round "<<i;
                break;
           }
        }
        else//哥輸
        {
            for(int j=1;j<=i;j++)
                {
                    cout<<b[j]<<" ";
                }
                cout<<": Lost at round "<<i;
                break;
            break;
        }
        
    }
}