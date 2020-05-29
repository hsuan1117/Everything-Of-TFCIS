#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double x1,y1,x2,y2;cin >> x1 >> y1 >> x2 >> y2;
	double dis1 = (x1-x2)*(x1-x2);
	double dis2 = (y1-y2)*(y1-y2);
	
	printf("%.3f\n",sqrt(dis1+dis2));
	return 0;
}
