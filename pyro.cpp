#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
using ull = unsigned long long ;


const int row = 13;
const int col = 6;
bool mapErase[row][col] = {0};
int map[row][col];

bool drop(){
	for(int x=0;x<6;x++){
		for(int y=0;y<13;y++){
			if(mapErase[y][x] == 1){
					map[y][x] = 0;
					mapErase[y][x] = 0;
			}
		}
	}
	bool change = false;
	for(i = 0; i < row - 1; i++){
		for(y = row - 2; y >= 0; y--){
			for(x = 0; x < col; x++){
				if((map[y][x] != 9) && (map[y][x] != 0) && (map[y + 1][x] == 0)){
					map[y + 1][x] = map[y][x];
					map[y][x] = 0;
					change = true;
				}
			}
		}
	}
	return change;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//pC
	
	/*¿é¤J*/
	string t ;cin >> t;
	for(int i=0;i<12;i++){
		string _map;cin >> _map;
		for(int j=0;j<6;j++){
			map[i][j] = _map[j];
		}
	}
	
	
	
	return 0;
}

