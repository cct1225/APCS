#include <bits/stdc++.h>
using namespace std;
int a[55][55];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i = 0;i < n;i++) {
		for(int j = 0;j < m;j++) {
			cin >> a[i][j];
		}
	}
	vector <pair<int,int> > ans; // 紀錄特殊位置的座標
	for(int i = 0;i < n;i++) {
		for(int j = 0;j < m;j++) {
			int sum = 0;
			int x = a[i][j];
			for(int ni = 0;ni < n;ni++){
				for(int nj = 0;nj < m;nj++){
					if(abs(ni-i) + abs(nj-j) <= x) { // 判斷曼哈頓距離是否 <= a[i][j] 
						sum += a[ni][nj];
					}
				}
			}
			if(sum % 10 == x) ans.push_back({i, j});
		}
	}
	cout << ans.size() << '\n';
	for(auto p : ans) {
		cout << p.first << ' ' << p.second << '\n';
	}
}