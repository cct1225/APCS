#include <iostream>
using namespace std;
int s, t, m, n, r;
int Y[11][101];
int X[11][101];
 
int distance(int r, int c){
    int ret = 0;
    for (int i=r; i<r+s; i++){
        for (int j=c; j<c+t; j++){
            ret += (X[i][j] != Y[i-r][j-c]);
        }
    }
    return ret;
}
 
int diff(int r, int c){
    int sum1 = 0, sum2 = 0;
    for (int i=r; i<r+s; i++){
        for (int j=c; j<c+t; j++){
            sum1 += X[i][j];
            sum2 += Y[i-r][j-c];
        }
    }
    return abs(sum1 - sum2);
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s >> t >> m >> n >> r;
    for (int i=0; i<s; i++){
        for (int j=0; j<t; j++){
            cin >> Y[i][j];
        }
    }
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >> X[i][j];
        }
    }
    //在矩陣X中有d個子矩陣與Y的距離不超過r
    int d = 0;
    //而這些子矩陣中與Y的總和差最小為k
    int k = 1e9;
    for (int i=0; i<=m-s; i++){
        for (int j=0; j<=n-t; j++){
            if (distance(i, j) <= r){
                d++;
                k = min(k, diff(i, j));
            }
        }
    }
    cout << d << '\n';
    if (d == 0) cout << "0\n";
    else cout << k << '\n';
    return 0;
}