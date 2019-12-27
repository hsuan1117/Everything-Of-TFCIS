#include<bits/stdc++.h>
using namespace std;
set<int> s[105]; 

int main() {
    int n,q; 
    cin>>n>>q; 
    s[0].insert(0);
    for(int i=0,t;i<n;i++){ 
        cin>>t;
        for(auto x:s[i]){ 
            s[i+1].insert(x+t); 
            s[i+1].insert(x-t); 
        } 
    }
    int t;
    while(q--){
      cin >> t;
      cout << *s[n].lower_bound(t) << endl;
    }
    return 0;
}
