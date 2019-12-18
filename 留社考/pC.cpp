#include<bits/stdc++.h>
#define endl '\n'
#define rep(n) for(int i=0;i<n;i++)
#define PRE_OUT_OF_RANGE 5
using namespace std;
using ll=long long;
using ull = unsigned long long;


int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k;cin >> n >>k;
	for(int i=0;i<n*k;i++){
		if((i/k)%2==0){
			for(int j=0;j<n;j++){
				if(j%2==0){
					cout << string(k,'*');
				}else{
					cout << string(k,' ');
				}	
			}
			cout << endl;
		}else{
			for(int j=0;j<n;j++){
				if(j%2==0){
					cout << string(k,' ');
				}else{
					cout << string(k,'*');
				}	
			}
			cout << endl;
		}
	}
	return 0;
}

