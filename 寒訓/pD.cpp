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
          for(int i=0; i<length; i++){
            int t;cin >> t;
            data.emplace_back(t);
          }
          vi toSort ;
          for(int i = 0; i < length -2 ;i++){
            int result = 0;
          }

          sort(toSort.begin(), toSort.end());
          //cout << toSort.at(toSort.size()-1) << endl;
        }
        return 0;
}
