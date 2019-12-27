#include <bits/stdc++.h>
using namespace std;
#define maxN 10000
#define maxS 10000
int sco[maxN]; // 所有配分 
int pos[maxS], r=0; 
void gen (int m, int s){
//m:= 現在己經選了 m 題; s:= 現在的累積分數     
    if (m==0){
        if(s>=0)pos[r++] = s; 
        return;
    }     
    gen(m-1,s+sco[m-1]);
    gen(m-1,s-sco[m-1]); 
}
int main() {
    int scoNum,askNum;
    cin >> scoNum >> askNum ;
    for(int i=0;i<scoNum;i++){
        cin >> sco[i];
        
    }
    gen(scoNum ,0);
    /*
    cout << "=======DEBUG========" << endl;
    for(int i=0;i<r;i++){
        cout << pos[i] << endl; 
    }
    cout << "=======DEBUG========" << endl;*/
    
    for(int i=0;i<askNum;i++){
        int data;cin >> data;
        sort(begin(pos),begin(pos)+r);
        cout << *lower_bound(begin(pos),begin(pos)+r,data)<< endl;
    }
    return 0;
}
