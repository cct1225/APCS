#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, m, d[21][3], nf,nr,nt; // Corrected array sizes
    cin >> n >> m;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (j == 0) d[i][j] = 4;
            if (j == 1) d[i][j] = 1;
            if (j == 2) d[i][j] = 2;
        }
    }
    for (int k = 0; k < m; k++) 
    {
        int a,b;
        cin >> a >> b;
        if (a > 0 && b > 0) {
           for(int i=0;i<3;i++)
           {
               swap(d[a][i],d[b][i]);
           }
        }
        else if (b == -1) { // a向前旋轉
            nf = d[a][1]; 
            nt= 7-d[a][0];
            d[a][0]=nf;
            d[a][1]=nt;
        }
        else if (b == -2) { // a向右旋轉
            nr= d[a][1]; 
            nt= 7-d[a][2];
            d[a][2]=nr;
            d[a][1]=nt;
        }

    }
    for (int i = 1; i <= n; i++) 
    {
        cout<<d[i][1]<<" ";
    }


    return 0;
}