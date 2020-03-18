#include<iostream>
#define elif else if
using namespace std;
int data[4] = {3,2,1,4};
void merge(int L,int R);
void merge_sort(int L,int R){
	int med = (L+R)/2;
	//cout << L << " " << R << " " << med << endl;
	if(L==R){
		return;
	}
	merge_sort(L,med);
	merge_sort(med+1,R);
	merge(L,R);
}
void merge(int L,int R){
	int mid = (L+R)/2;
	int a   = L,
		b   = mid+1;
	int tmp[R-L+1];
	for(int i=0;i<=R-L;i++){
		if(a > mid){
			tmp[i] = data[b];
			b++;
		}elif(b > R){
			tmp[i] = data[a];
			a++;
		}elif(data[a] > data[b]){
			tmp[i] = data[b];
			b++;
		}else{
			tmp[i] = data[a];
			a++;
		}
	}
	for(int i=0;i<R-L+1;i++){
		data[i+L] = tmp[i]; 
	}
	
}
int main() {
	merge_sort(0,3);
	for(int i=0;i<4;i++)cout << data[i] << endl;
	return 0;
}
