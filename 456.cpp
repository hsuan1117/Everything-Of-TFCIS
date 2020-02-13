#include<bits/stdc++.h>
#define endl '\n'
#define rep(_) for(int i=0;i<_;i++)
using namespace std;
using ull = unsigned long long ;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int a[4] = {1,1,2,3};
	swap(a[0],a[3]);
	rep(sizeof(a)){
		cout << a[i] << endl;
	}
	return 0;
}

