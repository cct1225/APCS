#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,k,Q[51][51],s[51],sum[51]={0},p[51][51]={0};
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>Q[i][j];
        }
    }
    for(int g=0;g<k;g++)//方案數量
    {
        for(int p=0;p<n;p++)
        {
            cin>>s[p]; //server[p]=city
        }
        //將各城市之間歸零
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                p[i][j]=0;
            }
        }
        for(int i=0;i<n;i++)//伺服器
        {
            for(int j=0;j<m;j++)//城市
            {
                p[s[i]][j]+=Q[i][j]; // s[i] 是一個城市
            }
        }
        //以下套用不同城市之費率公式
        for(int i=0;i<m;i++)//城市
        {
            for(int j=0;j<m;j++)//城市
            {
                if(i==j) sum[g]+=p[i][j];
                else
                {
                    if(p[i][j]<=1000)  sum[g]+=(p[i][j])*3;
                    else sum[g]+=((p[i][j]-1000)*2+3000);
                }
            }
        }
    }
    sort(sum,sum+k);
    cout<<sum[0]; 
    }

    
