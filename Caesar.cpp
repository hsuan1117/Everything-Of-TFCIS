#include<bits/stdc++.h>
using namespace std;

int main(){
  string text = "",res="";
  cin >> text;
  for(int i=1;i<100;i++){
    for(auto x : text){
      if(int(x)+i > 127)
        res += char(int(x)+i);
      else
        res += char(int(x)+i);
    }
    cout << res << endl;
    res.clear();
  }
  return 0;
}
