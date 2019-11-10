#include<bits/stdc++.h>
using namespace std;
void alpha(int H){
    string reversed = "";
    for(int i=0; i<H+1; i++){
        reversed += char(64+(H-i+1)) ;
    }
    for(int i=0; i<H; i++){
        reversed += char(64+(i+2)) ;
    }
    cout << reversed << endl;
    for(int i=0; i<H-2; i++){
        cout << char(64+H+1) << string(2*H-1,' ') << char(64+H+1) << endl;
    }
    cout << reversed << endl << reversed << endl;
    for(int i=0;i<H;i++){
        cout << string(i+1,' ');
        for(int j=0;j<H-i;j++){
            cout << char(65+H-j);
        }
        for(int j=0;j<H-i-1;j++){
            cout << char(64+3+i+j);
        }
        cout << endl;
    }
}
void opthash(int H){
    cout << string(2*H+1,'#') << endl;
    for(int i=0;i<H-2;i++){
        cout << '#' << string(2*H-1,' ') << '#' << endl;
    }
    cout << string(2*H+1,'#') << endl;
    cout << string(2*H+1,'#') << endl;
    for(int i=0;i<H;i++){
        cout << string(i+1,' ');
        cout << string(2*H - 2*i - 1,'#') << endl;
    }
}
int main() {
    int h;
    while (cin >> h){
        if(h <= 25){
            alpha(h);
        }else {
            opthash(h);
        }
    }
    return 0;
}
