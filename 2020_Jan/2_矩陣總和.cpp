#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int s, t, n, m, r, A[101], B[101], Asum = 0, cnt = 0, num = 0,total,loopcount=0;
    cin >> s >> t >> n >> m >> r;
    vector<int>vec;
    for (int j = 0; j < t; j++) {
        cin >> A[j];
        Asum += A[j];
    }
    for (int j = 0; j < m; j++) {
        cin >> B[j];
    }
    for (int k = 0; k < m - 2; k++) 
    {
        cnt = 0;
        total=0;
        for (int j = k, i = 0; j < k + t && i < t; j++, i++) 
        {
            total+=B[j];
            if (A[i] != B[j])  cnt++;
        } 
        if (cnt <= r)  
        {
            num++;
            vec.push_back(abs(total-Asum));
        }  
    }
    cout <<num<<endl;
    sort(vec.begin(),vec.end());
    cout<<vec[0];
}