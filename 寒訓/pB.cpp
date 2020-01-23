#include <bits/stdc++.h>
#define elif else if
#define FOREACH(item, array) \
        for(int keep=1, \
            count=0, \
            size=sizeof (array)/sizeof *(array); \
            count != size; \
            keep=1, count++) \
        for(item = (array)+count; keep; keep = !keep)
#define endl '\n'
using namespace std;
using ull = unsigned long long;
using ll  = long long;
using vi  = vector<int>;
using vull= vector<unsigned long long>;
using ss  = stringstream;
vi data;

int main(){
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int N;int precision;
        cin >> N >> precision;

        for(int i=0;i<N;i++){
          int a;cin >> a;
          data.emplace_back(a);
        }
        //sort(data.begin(), data.end());
        int q;cin >> q;
        for(int i=0;i<q;i++){
            int all = 0;
            int from;int to;cin >> from >> to;
            //cout << upper_bound(data.begin(), data.end(), from)-data.begin() << endl;

            for(int j=0;j<data.size();j++){
              /*if(data.at(j)<from){
                break;
              }*/
              if(data.at(j)>=from && data.at(j)<=to){
                all++;

                //cout << data.at(j) << " ("<< from <<", "<< to <<")"<< endl;
              }
            }

            double ds = (double)data.size();
            double _all = (double)all;
            cout << fixed << setprecision(precision) << (_all/ds)*100.0 << "%" << endl;
        }
        return 0;
}
