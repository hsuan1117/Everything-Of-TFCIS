#include<bits/stdc++.h>
#define endl '\n'
#define rep(_) for(unsigned long long i=0;i<_;i++)
using namespace std;
using ull = unsigned long long ;
using ll  = long long;
using ss  = stringstream;
ull cards[300000];
ull newCards[300000];
ull moves[300000];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ull cardNum;
	cin >> cardNum;
	rep(cardNum) {
		cin >> cards[i];
	}
	/*
	cout << "Origin ------" << endl;
	rep(cardNum) {
		cout << cards[i] << " ";
	}
	cout << endl;
	*/
	rep(cardNum) {
		cin >> moves[i];
	}

	string times;
	
	ull times;
	
	cin >> times;
	times = times % cardNum;
	if(cardNum == 0 || cardNum == 1)times = 0;
	/*cout << endl << "Moving for " << times << " times " << endl;*/
	for(ull j=0; j<times; j++) {
		/*cout << "Start moving ("<< j+1 << ")" << endl;*/
		rep(cardNum) {
			ull to = moves[i];
			/*cout << "From " << i << "---> " << to-1 << endl;*/
			newCards[to-1] = cards[i];
		}
		rep(cardNum) {
			cards[i] = newCards[i];
		}
		/*cout << endl;*/
		/*cout << "New ------" << endl;*/
		/*rep(cardNum) {
			cout << newCards[i] << " ";
		}*/
		/*cout << endl*;*/
	}

	/*cout << "New ------" << endl;*/
	rep(cardNum) {
		cout << newCards[i] << (i == cardNum-1 ? "" : " ");
	}
	cout << endl;

	return 0;
}

