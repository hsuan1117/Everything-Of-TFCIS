#include<bits/stdc++.h>
#define endl '\n'
#define rep(n) for(int i=0;i<n;i++)
#define PRE_OUT_OF_RANGE 5
using namespace std;
using ll=long long;
using ull = unsigned long long;

int data[2160+PRE_OUT_OF_RANGE][1920+PRE_OUT_OF_RANGE];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int W,H,angle;
	cin >> H >> W >> angle;

	for(int i=0; i<H; i++) {
		for(int j=0; j<W; j++) {
			cin >> data[i][j];
		}
	}

	if(angle==0 || angle==360) {
		for(int i=0; i<H; i++) {
			for(int j=0; j<W; j++) {
				cout << data[i][j] ;
				if(j!=W-1)cout << " ";
			}
			cout << endl;
		}
	} else if(angle==90) {
		for(int i=0; i<W; i++) {
			for(int j=H-1; j>=0; j--) {
				cout << data[j][i] ;
				if(j!=0)cout << " ";
			}
			cout << endl;
		}
	} else if(angle==180) {
		for(int i=H-1; i>=0; i--) {
			for(int j=W-1; j>=0; j--) {
				cout << data[i][j] ;
				if(j!=0)cout << " ";
			}
			cout << endl;
		}
	} else if(angle==270) {
		for(int i=W-1; i>=0; i--) {
			for(int j=0; j<H; j++) {
				cout << data[j][i] ;
				if(j!=H-1)cout << " ";
			}
			cout << endl;
		}
	}

	/* DEBUG */
	/*
	for(int i=0;i<W;i++){
		for(int j=0;j<H;j++){
			cout << data[i][j] << " ";
		}
	}
	3 4
	270
	8 2 3 7
	6 9 4 5
	1 3 2 4
	*/
	return 0;
}

