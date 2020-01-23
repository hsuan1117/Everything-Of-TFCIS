#include <bits/stdc++.h>
#define elif else if
#define FOREACH(item, array) \
        for(int keep=1, \
            count=0, \
            size=sizeof (array)/sizeof *(array); \
            count != size; \
            keep=1, count++) \
        for(item = (array)+count; keep; keep = !keep)
#define endl '\n';
using namespace std;
using ull = unsigned long long;
using ll  = long long;
using vi  = vector<int>;
using vull= vector<unsigned long long>;
using ss  = stringstream;

int main(){
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int length;
        while(cin >> length) {
                vi data;
                vi toSort;
                //int result;
                int temp;cin >> temp;
                for(int i = 0; i < length-1; i++) {
                    int j; cin >> j;
                }
                //cout << temp << " " << temp%2 << endl;
                if(length%2 == 1){
                  cout << temp*(temp/2+1) << endl;
                }else{
                  cout << temp*(temp/2) << endl;
                }
                //cout << temp*(temp/2) << endl;
        }
        return 0;
}
