#include<bits/stdc++.h>
#define endl '\n'
#define rep(n) for(int __temp=0;__temp<n;__temp++)
using namespace std;
int Prime[10000001];
    //Prime若不是質數，存篩掉他ㄉ那個數
    
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    rep(10000001){
        Prime[__temp] = 1;
    }
    int n;cin >>n;
    for(int i=2;i<=10000000;i++){
            if(Prime[i]==1){
                   Prime[i]=i;
                   for(int j=i;j<=10000000;j+=i){
                       Prime[j]=i;
                }
            }
        }
    rep(n){
        int F;cin >> F;
        /*for(int i=2;i<=F;i++){
            if(Prime[i]==1){
                   Prime[i]=i;
                   for(int j=i;j<=F;j+=i){
                       Prime[j]=i;
                }
            }
        } *//*
        for(int i=0;i<F;i++){
            cout << i << " "<<Prime[i]<<endl;
        }*/
        if(F==Prime[F]){
            cout << "1 " << F << endl;
        }else if(Prime[F/Prime[F]] == Prime[F]){
            cout << "1 " << Prime[F] << endl;
        }else{
            cout << Prime[F/Prime[F]] << " " << Prime[F] << endl;
        }
        /* 
        if(1==Prime[F] || Prime[F/Prime[F]] == Prime[F]){
            cout << "1 " << F << endl;
        }else{
            cout << Prime[F/Prime[F]] << " " << Prime[F] << endl;
        }*/
        
    }
    
    return 0;
}
