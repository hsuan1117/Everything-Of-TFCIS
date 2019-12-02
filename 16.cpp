#include<bits/stdc++.h>

using namespace std;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int tt;
  scanf("%i\n",&tt);
  for(int mm=0;mm<tt;mm++){
  set<int> can;
  int studentNum;
  scanf("%i\n",&studentNum);
  int data[studentNum];
  for(int m=0;m<studentNum;m++){
    int ttftt;
    scanf("%i",&ttftt);
    data[m] = ttftt;
  }
  for(int i=0;i<studentNum;i++){
    for(int j=i+1;j<studentNum;j++){
      int temp=data[i]+data[j];
      if(can.count(temp)==0){
        can.insert(temp);
      }
    }
  }
  int ko;
  scanf("%i\n",&ko);
  for(int m=0;m<ko;m++){
    int f;
    scanf("%i",&f);
    if(can.count(f)){
      cout << "Good!" << endl;
    }else{
      cout << "So Bad!" << endl;
    }
  }
  }
  return 0;
}
