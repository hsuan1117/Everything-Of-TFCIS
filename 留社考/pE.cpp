#include<bits/stdc++.h>
#define endl '\n'
#define rep(n) for(int i=0;i<n;i++)
#define PRE_OUT_OF_RANGE 5
using namespace std;
using ll=long long;
using ull = unsigned long long;

int vis[1000+PRE_OUT_OF_RANGE][1000+PRE_OUT_OF_RANGE]={0};
int data[300000+PRE_OUT_OF_RANGE];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N,Q;
	cin >> N >> Q;
	rep(N)cin >> data[i];
	rep(Q) {
		ll k,m;
		ll result = 0;
		bool breakOut = 0;
		cin >> k >> m;
		if(vis[k][m] !=0 && k<=1000&&m<=1000){
			cout << vis[k][m] << endl;
			breakOut =1;
			break;
		}
		for(int j=k-1; j<N; j++) {
			result += data[j];
			if(result >= m) {
				vis[k][m] = j-k+2;
				cout << j-k+2  << endl;
				breakOut =1;
				break;
			}
		}
		if(breakOut)continue;
		
		if(result >= m ) {
			vis[k][m] = N-k+1;
			cout << N-k+1 << endl;
		}else{
			vis[k][m] = -1;
			cout << -1 << endl;
		}
	}
/*

8 5
2 10 6 4 8 9 7 3
1 2
2 23
3 46
5 10
1 100000

*/


	return 0;
}

