#include<bits/stdc++.h>
#define endl '\n'
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
//using ll=long long;
typedef unsigned long long ull;
int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int toMake;
	float time;
	cin >> toMake;
	cin >> time;
	
	float all = (toMake/10.0)*3.0 + ((9.0*toMake)/10.0)*2.0;
	if(all <= time){
		cout << "Loli Loli!" << endl;
	}else if(all-time < 5.0){
		cout << "Q_3lppl3_Q" << endl;
	}else{
		cout << "Hentai!" << endl;
	}
	return 0;
}

