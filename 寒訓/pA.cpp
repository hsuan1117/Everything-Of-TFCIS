#include <bits/stdc++.h>
#define elif else if
#define FOREACH(item, array) \
        for(int keep=1, \
            count=0, \
            size=sizeof (array)/sizeof *(array); \
            count != size; \
            keep=1, count++) \
        for(item = (array)+count; keep; keep = !keep)
using namespace std;
using ull = unsigned long long;
using ll  = long long;
using vi  = vector<int>;
using vull= vector<unsigned long long>;
using ss  = stringstream;

struct Team {
  string name;
  int q;
  int m;
};
bool cmp(Team a, Team b){
  
  if((a.q > b.q) || (a.q == b.q && a.m < b.m)){
    return true;
  }else{
    return false;
  }
}
int main(){
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int N;cin >> N;
        vector<Team> teams;
        for(int i=0; i<N; ++i){
          Team t ;

          string s;cin >> s;
          int j;cin >> j;
          int k;cin >> k;
          /* Name j k */
          t.name = s;
          t.q = j;
          t.m = k;
          teams.push_back(t);
        }
        sort(teams.begin(), teams.end());
        return 0;
}
