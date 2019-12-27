#include <bits/stdc++.h> 
using namespace std; 

int main() { 
    int data;
    cin >> data;
    for(int i=0;i<data;i++){
        int a,b;
        cin >> a >> b;
        cout << __gcd(a,b) << endl; 
    }
}
