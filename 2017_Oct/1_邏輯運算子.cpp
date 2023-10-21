#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    
    while(cin>>a>>b>>c)
    {

        int cnt=0;
        if(c==0)
        {
            if(a==0&&b==0)  
            {
                cout<<"AND"<<endl;  
                cnt++;
            }
            else if(a==0&&b!=0) 
            {
                cout<<"AND"<<endl;  
                cnt++;
            }
            else if(a!=0&&b==0)
            {
                cout<<"AND"<<endl;
                cnt++;
            }  
            if(a==0&&b==0)  
            {
                cout<<"OR"<<endl;
                cnt++;
            }
            if(a==0&&b==0)  
            {
                cout<<"XOR"<<endl;
                cnt++;
            }
            else if(a!=0&&b!=0)
            {
                cout<<"XOR"<<endl;
                cnt++;
            }
            if(cnt==0)  cout<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            if(a!=0&&b!=0)  
            {
                cout<<"AND"<<endl;  
                cnt++;
            }
            if(a!=0&&b!=0)  
            {
                cout<<"OR"<<endl;  
                cnt++;
            }
            else if(a!=0&&b==0)  
            {
                cout<<"OR"<<endl;  
                cnt++;
            }
            else if(a==0&&b!=0)  
            {
                cout<<"OR"<<endl;  
                cnt++;
            }
            if(a!=0&&b==0)
            {
                cout<<"XOR"<<endl;
                cnt++;
            }  
            else if(a==0&&b!=0) 
            {
                cout<<"XOR"<<endl;
                cnt++;
            }            
            if(cnt==0)  cout<<"IMPOSSIBLE"<<endl;
        }
  
    }






}