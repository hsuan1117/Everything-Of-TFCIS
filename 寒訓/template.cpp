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
        int a[10] = {1,2,3,4,5,6,7,8,9};
        FOREACH(int* k,a){
                cout << *k << endl;
        }
        stringstream ss;
        string s; cin >> s;
        ss << s;
        int b;
        while(ss >> b) {
                cout << a << endl;
        }
        return 0;
}
