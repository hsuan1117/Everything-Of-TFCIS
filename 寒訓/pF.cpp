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
vull data;
int main(){
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int length;cin >> length;
        for(int i = 0; i < length;i++){
          int temp;cin >> temp;
          data.emplace_back(temp);
        }
        int result = 0;
        //sort(data.begin(), data.end());
        for(int i = 0; i < length -2 ;i++){
          for(int j = i + 1; j < length;j++){
            for(int k = j + 1; k < length;k++){
              //cout << i << " ("<< data[i] << "), " << j << " (" << data[j] << "), " << k << "(" <<  data[k] << ") => " << (data[i] < data[j] && data[j] < data[k]) <<  endl;
              if(data[i] < data[j] && data[j] < data[k]){
                result++;
              }
            }
          }
        }
        cout << result << endl;
        return 0;
}
