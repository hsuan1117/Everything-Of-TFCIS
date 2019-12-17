#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	//274
	ios::sync_with_stdio(0);cin.tie(0);
	int a;cin>>a;
	string s,_s;
	for(int k=0;k<a;k++){
		cin >> s;
		int pS=0,pE=s.length()-1;
		int err=0;
		_s = s;
		reverse(_s.begin(),_s.end());
		if(pE<2 || _s==s){
			cout << "YES" << endl;
			continue;
		}
		//bool isBreak = 0;
		while(err < 2){
			 if(pS >= pE )break;

			if(s[pS] == s[pE]){
				//cout << pS << ": " << s[pS] << "," << pE << ": " << s[pE] << endl;
				pS++;
				pE--;
			}else{
				//err++;
				if(s[pS+1]==s[pE]&&s[pS]==s[pE-1]){
				  pS++;pE--;//err++;
                }else if(s[pS+1]==s[pE]){
                  err++;
                  pS++;
                  //pS++;pE--;
                }else if(s[pS]==s[pE-1]){
                  err++;
                  pE--;
                  //pS++;pE--;
                }else{
                  err++;err++;
                }
                pS++;pE--;
                /*
				if(s[pS+1]==s[pE]&&s[pS]==s[pE-1]){
				  err++;
				  pS++;
				  pE--;
				}else if(s[pS+1]==s[pE])pS++;
				else if(s[pS]==s[pE-1])pE--;
				else err++;
				//cout << pS << ": " << s[pS] << "," << pE << ": " << s[pE] <<"&"<< err << endl;
				//pS++;
				//pE--;*/
			}
		}
		if(err > 1)cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
