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
	bool firstTime = true;
	for(int i=0; i<length; i++) {
		//cout << "Start: " << i << " " << realData[i] << endl; 
		
		if(i > realData[i]) {
			int j=i+1;
			while(j < length && j >= realData[j]) {
				//cout << j << " " << realData[j] << endl; 
				j++;
				i++;
			}
			turn++;
			//cout << "  By the way." << turn ;
			//cout << endl;
		} else {
			int j=i+1;
			while(j < length && j <= realData[j]) {
				//cout << j << " " << realData[j] << endl; 
				j++;
				i++;
			}
			if(!firstTime){
				turn++;
			}else{
				//cout << "This is the first time" << endl;
				firstTime = false;
			}
			//cout << "  By the way." << turn ;
			//cout << endl;
		}

	}



	//for(int i=0; i<length; i++)cout << i << " --> " << realData[i] << endl;
	cout << turn << endl;
	return 0;
}

