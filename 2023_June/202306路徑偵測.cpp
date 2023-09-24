#include<iostream>
using namespace std;
int main()
{
    int n,right=0,left=0,re=0,x[101],y[101];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
    }
    x[0]=0;
    y[0]=0;
    int f=1;// x方向 右
    for(int i=1;i<=n;i++)
    {
        if(x[i]==x[i-1]&&y[i]>y[i-1])    
        {
            if(f==1){
                left++;
            }
            else if(f==-1)
            {
                right++;
            }
            else if(f==-2)
            {
                re++;
            }
            f=2;   
            continue;
        }
        else if(x[i]==x[i-1]&&y[i]<y[i-1])
        { 
            if(f==1){
                right++;
            }
            else if(f==-1)
            {
                left++;
            }
            else if(f==2)
            {
                re++;
            }
            f=-2;   
            continue;
        }
        else if(x[i]>x[i-1]&&y[i]==y[i-1])
        {
            if(f==2){
                right++;
            }
            else if(f==-1)
            {
                re++;
            }
            else if(f==-2)
            {
                left++;
            }
            f=1;  
            continue;
        }
        else if(x[i]<x[i-1]&&y[i]==y[i-1])
        {
            if(f==1){
                re++;
            }
            else if(f==2)
            {
                right++;
            }
            else if(f==-2)
            {
                right++;
            }
            f=-1;
            continue;
        }
    }
    cout<<left<<" "<<right<<" "<<re<<endl;
}