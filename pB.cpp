#include<bits/stdc++.h>
#define endl '\n'
#define rep(_) for(int i=0;i<_;i++)
using namespace std;
using ull = unsigned long long ;
using ll  = long long;
using ss  = stringstream;

struct Position {
	int x;
	int y;
};
int step[2] = {1,-1};
int Graph[1000][1000];
int LabeledGraph[1000][1000] = {0};
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int _X,_Y;
	cin >> _Y >> _X;
	/*
	 * 2 10
	 * 0123456789
	 * 1012345678
	 */

	Position NineHere;
	Position Now;
	for(int y=0; y<_Y; y++) {
		string tmp;
		cin >> tmp;
		for(int x=0; x<_X; x++) {
			if(tmp[x] == '9') {
				NineHere.x = Now.x = x;
				NineHere.y = Now.y = y;
			}
			//cout << x << "," << y << " = "<< tmp[x] << endl;
			Graph[x][y] = tmp[x]-'0';
			//cout << x << "," << y << " = "<< Graph[x][y] << endl;
		}
	}

	while(Now.x < _X && Now.y < _Y && Now.x >= 0 && Now.y >= 0) {
		cout << Now.x << "," << Now.y << endl;
		if(LabeledGraph[Now.x][Now.y] == 0) {
			Position T = Now;
			for(int i=0; i<2; i++) {
				for(int j=0; j<2; j++) {
					T.x += step[i];
					T.y += step[j];
					cout << step[i] << "," << step[j] << endl;
					cout << T.x << "," << T.y << endl;
				}
			}
			if(Now.x < _X && Now.y < _Y && Now.x >= 0 && Now.y >= 0) {
				Now = T;
			}

		}
	}


	/*

	cout << NineHere.x << "," << NineHere.y << endl;

	//Left
	cout << "Left" << endl;
	cout << Graph[NineHere.x-1][NineHere.y] << endl;

	*/




















	return 0;
}

