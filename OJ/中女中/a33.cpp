#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	long long x;cin >> x;
	if(x>=10000){
	    cout << "|____" << setw(4) << setfill('0') << x%10000 << "|" << endl;
	}else{
	    cout << "|____" << setw(4) << setfill('_') << x << "|" << endl;
	}
	
	
	return 0;
}
