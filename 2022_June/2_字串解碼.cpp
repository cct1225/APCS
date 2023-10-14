#include<iostream>
#include<string>
#include<deque>
#include<vector>
using namespace std;
int main()
{
    int n,m,a[100],cnt=0,length=0;
    string b[100],s;
    char c;
    deque<char>ans;
    deque<char>d;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a[i];
        if(a[i]==1) cnt++;
    }
    for(int j=0;j<n;j++)
    {
        
    }
    for(int i=1;i<=m;i++)
    {
        cin>>c;
        ans.push_back(c);
    }
    cout<<"---------------"<<endl;
    cout<<"check:"<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<ans.at(i)<<" ";
    }
    cout<<endl;
    cout<<"---------------";
    for(int i=m;i>=1;i--)
    {
        if(a[i]==0)
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
    cout<<endl;
    for(int i=m;i>=1;i--)
    {
        cout<<d.at(i-1)<<" ";
        s+=d.at(i-1);
    }
    cout<<endl;
    cout<<s<<endl;
    if(cnt%2==1)
    {
        if(d.size()%2==1)//位數為奇數個
        {
            cout<<s.substr(((d.size()-1)/2)+1,(d.size()-1));
            cout<<s[(d.size()-1)/2];
            cout<<s.substr(0,((d.size()-1)/2));
        }
        else//位數為偶數個
        {
            cout<<s.substr((d.size()-1)/2,(d.size()-1));
            cout<<s.substr(0,((d.size()-1)/2)-1);
        }
    }
    else    cout<<s;

    return 0;
}
