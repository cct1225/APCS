#include<bits/stdc++.h>
using namespace std;
int k,ans=0;
string s;
vector<int>segments;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>k>>s;
    int tmp=1;
    for(int i=1;i<s.size();i++)
    {
        if(isupper(s[i])==isupper(s[i-1]))tmp++;
        else{
            segments.push_back(tmp);
            tmp=1;
        }
    }
    if(tmp==1)segments.push_back(tmp);
    tmp=-1;
    for(int i=0;i<segments.size();i++){
        if(segments[i]==k){
            if(tmp==-1)tmp=i;
            else continue;
        }
        else{
            if(tmp==-1)continue;
            else{
                int num=i-tmp;
                if(segments[i]>k)num++;
                if(tmp!=0&&segments[tmp-1]>k)num++;
                ans=max(ans,num);
                tmp=-1;
            }
        }
    }
    if(tmp!=-1){
        int num=segments.size()-tmp;
        if(tmp!=0&&segments[tmp-1]>k)num++;
        ans=max(ans,num);
    }
    cout<<ans*k;
}