#include <bits/stdc++.h>
using namespace std;
int main(){
  [](){
    const auto a = [&]{
      return 1;
    }();
    cout << a << endl;
  };
  return 0;
}
