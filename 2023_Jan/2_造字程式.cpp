#include<iostream>
#include<string>
using namespace std;
int main()
{
    int length,times,lines;
    cin>>length>>times>>lines;
    string s;
    char c[21][21];
    int a[length];
    cin>>s;
    for(int i=0;i<length;i++)
    {
        c[0][i+1]=s[i];
    }
    for(int i=1;i<=times;i++)//變換次數
    {
        for(int j=1;j<=length;j++)
        {
            cin>>a[j];
            c[i][a[j]]=c[i-1][j];
        }

    }
    for(int i=1;i<=lines;i++)
    {
        for(int j=1;j<=times;j++)
        {
            cout<<c[j][i];
        }
        cout<<endl;
    }
    

}