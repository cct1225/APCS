#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int n,m,a[51][51],x,d,cnt=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    vector <pair<int,int> > ans; 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int sum=0;
            x=a[i][j];
            for(int k=0;k<n;k++)
            {
                for(int h=0;h<m;h++)
                {
                    d=abs(i-k)+abs(j-h);
                    if(d<=x) sum+=a[k][h];
                }
            }
            if(sum%10==x)   
            {
                ans.push_back({i, j});
                cnt++;
            } 
        }
        
    }
    cout<<cnt<<'\n';
    for(auto p:ans)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }







}