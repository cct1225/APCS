#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,s[1001],t[1001],l[1001]={0},m,num,left;
    vector<int>v,w,f;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    while(v.size()!=1)
    {
        int cnt=0;
        if(n%2==0)//每輪
        {
            w.clear();
            f.clear();
            for(int i=0;i<n-2;i+=2)
            {
                if(s[v.at(i)]*t[v.at(i)]>=s[v.at(i+1)]*t[v.at(i+1)]) //第一人獲勝
                {
                    l[v.at(i+1)]++;
                    s[v.at(i)]=s[v.at(i)]+(s[v.at(i+1)]*t[v.at(i+1)])/t[v.at(i)]*2;
                    t[v.at(i)]=t[v.at(i)]+(s[v.at(i+1)]*t[v.at(i+1)])/s[v.at(i)]*2;
                    s[v.at(i+1)]=s[v.at(i+1)]+s[v.at(i+1)]/2;
                    t[v.at(i+1)]=t[v.at(i+1)]+t[v.at(i+1)]/2;
                    w.push_back(v.at(i));
                    f.push_back(v.at(i+1));
                }
                else //第二人獲勝
                {
                    l[v.at(i)]++;
                    s[v.at(i)]=s[v.at(i)]+s[v.at(i)]/2;
                    t[v.at(i)]=t[v.at(i)]+t[v.at(i)]/2;
                    s[v.at(i+1)]=s[v.at(i+1)]+(s[v.at(i)]*t[v.at(i)])/t[v.at(i+1)]*2;
                    t[v.at(i+1)]=t[v.at(i+1)]+(s[v.at(i)]*t[v.at(i)])/s[v.at(i+1)]*2;
                    w.push_back(v.at(i+1));
                    f.push_back(v.at(i));
                }
            }
            for(int i=f.at(0);i<f.size();i++)
            {
                if(l[v.at(i)]==m)  
                {
                    f.erase(v.begin()+(i-1));
                    i--;
                }
            }
            v.clear();
            for(int i = 0; i < w.size(); i++) 
            {
                v.push_back(w[i]);
            }
            for(int i = 0; i < f.size(); i++) 
            {
                v.push_back(f[i]);
            }
            w.clear();
            f.clear();
        }
        else//n為奇數
        {
            for(int i=0;i<n-3;i+=2)
            {
                left = v.back(); // Get the last element
                v.pop_back(); // Remove the last element
                if(s[v.at(i)]*t[v.at(i)]>=s[v.at(i+1)]*t[v.at(i+1)]) //第一人獲勝
                {
                    l[v.at(i+1)]++;
                    s[v.at(i)]=s[v.at(i)]+(s[v.at(i+1)]*t[v.at(i+1)])/t[v.at(i)]*2;
                    t[v.at(i)]=t[v.at(i)]+(s[v.at(i+1)]*t[v.at(i+1)])/s[v.at(i)]*2;
                    s[v.at(i+1)]=s[v.at(i+1)]+s[v.at(i+1)]/2;
                    t[v.at(i+1)]=t[v.at(i+1)]+t[v.at(i+1)]/2;
                    w.push_back(v.at(i));
                    f.push_back(v.at(i+1));
                }
                else //第二人獲勝
                {
                    l[v.at(i)]++;
                    s[v.at(i)]=s[v.at(i)]+s[v.at(i)]/2;
                    t[v.at(i)]=t[v.at(i)]+t[v.at(i)]/2;
                    s[v.at(i+1)]=s[v.at(i+1)]+(s[v.at(i)]*t[v.at(i)])/t[v.at(i+1)]*2;
                    t[v.at(i+1)]=t[v.at(i+1)]+(s[v.at(i)]*t[v.at(i)])/s[v.at(i+1)]*2;
                    w.push_back(v.at(i+1));
                    f.push_back(v.at(i));
                }
            }
            for(int i=f.at(0);i<f.size();i++)
            {
                if(l[v.at(i)]==m)  
                {
                    f.erase(v.begin()+(i-1));
                    i--;
                }
            }
            v.clear();
            for(int i = 0; i < w.size(); i++) 
            {
                v.push_back(w[i]);
            }
            v.push_back(left);
            for(int i = 0; i < f.size(); i++) 
            {
                v.push_back(f[i]);
            }
            w.clear();
            f.clear();
        }
    }
    









}