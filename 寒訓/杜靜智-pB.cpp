#include<bits/stdc++.h>
using namespace std;
long long n,k,m,p,q;
long long a[1000000];


int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
	
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cin>>m;
	for(int i=0;i<m;i++)
	{
		long long l=0,l1=0,r=n-1,r1=n-1;
		cin>>p>>q; 	q++;
		if(p<a[0]) l=0;
		if(p>a[n-1]) l=n;
		else
		{
			while(l<r)
			{
				long long m=(l+r)/2;
				if(a[m]>=p)				r=m;
				else if(a[m]<p)			l=m+1;
			}
		}
		
		if(q>a[n-1]) l1=n;
		else
		{
			while(l1<r1)
			{
				long long m1=(l1+r1)/2;
				if(a[m1]>=q)			
				{
					r1=m1;
				}
				else if(a[m1]<q)
				{
					l1=m1+1;
				}	
			}
		}
		cout<<fixed<<setprecision(k)<<(double)(l1-l)/n*100<<'%'<<'\n';
	}
	return 0;
}

/*
ios::sync_with_stdio(0);
	cin.tie(0);
*/
