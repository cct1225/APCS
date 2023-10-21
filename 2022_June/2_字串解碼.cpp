#include<iostream>
#include<string>
#include<deque>
using namespace std;
int main()
{
    int n,m,cnt=0,length=0;
    string s1[100],s2,s,news;
    char c;
    deque<char>ans;
    deque<char>d;
    cin>>n>>m;
    for(int j=0;j<n;j++)
    {
        cin>>s1[j];// 輸入1&0
    }
    cin>>s2;
    for(int j=n-1;j>=0;j--)
    {
     
        if(j<n-1)    s2=news;
        cnt=0;
        s.clear();
        news.clear();
        d.clear();
        ans.clear();
        for(int i=0;i<m;i++)
        {
            if(s1[j][i]=='1') cnt++;
        }
        for(int i=0;i<m;i++)
        {
            ans.push_back(s2[i]);
        }
        for(int i=m;i>=1;i--)
        {
            if(s1[j][i-1]=='0')
            {
                d.push_back(ans.at(i-1));
                ans.pop_back();
            }
            else
            {
                d.push_front(ans.at(i-1));
                ans.pop_back();
            }
        }
        for(int i=m;i>=1;i--)
        {
            s+=d.at(i-1);
        }
        if(cnt%2==1)
        {
            if(d.size()%2==1)//位數為奇數個
            {
                news+=s.substr(((d.size()-1)/2)+1,(d.size()-1));
                news+=s[(d.size()-1)/2];
                news+=s.substr(0,((d.size()-1)/2));
            }
            else//位數為偶數個
            {
                news+=s.substr((d.size()+1)/2,d.size());
                news+=s.substr(0,(d.size()+1)/2);
            }
    }
    else    news=s;
    }  
    cout<<news;
    return 0;
}
