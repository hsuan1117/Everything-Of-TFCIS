#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
using ull = unsigned long long ;
vector<pair<int,int>> data;
int realData[1000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int length ;
	cin >> length;
	for(int i=0; i<length; i++) {
		int a,b;
		cin >> a >> b;
		data.emplace_back(make_pair(a,b));
	}
	for(int i=0; i<length; i++) {
		for(int j=0; j<length; j++) {
			if(data.at(j).second == data.at(i).first) {
				realData[i] = j;
			}
		}
	}
	int turn = 0;
	for(int i=0; i<length; i++) {
		if(i > realData[i]) {
			turn++;
		}
		int j=i+1;
		while(j < length && j <= realData[j]){
			j++;
			i++;
		}
	}



	//for(int i=0; i<length; i++)cout << i << " --> " << realData[i] << endl;
	cout << turn << endl;
	return 0;
}

