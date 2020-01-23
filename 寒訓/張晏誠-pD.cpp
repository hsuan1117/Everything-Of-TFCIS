
#include<bits/stdc++.h>
#define endl '\n'
#define iii ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int dp[10000000];
int prev[10000000];
int val1[10000000];

int main() {
	
	int x;
	while(cin>>x)
	{	bool z=1;
		for(int a=1;a<=x;a++)
		{
			cin >>dp[a];
			if(a>1)
			{
				if(dp[a]!=dp[a-1]){
					z=0;
				}
			}
		}
		
		if(z)
		{	
			if(dp[1]<0)
			{
				cout << 0 << endl;
			}
			else
			{
				cout << dp[1]*((x+1)/2) << endl;
			}
			continue;
		}
		
		
		if(dp[1]<0)
		{
			val1[1] = 0;
		}
		else
		{
			val1[1] = dp[1];
		}
		
		
		if(dp[1]<0&&dp[2]<0)
		{
			dp[2] = 0;
		}
		if(dp[1]>dp[2])
		{
			val1[2] = dp[1];
		}
		else
		{
			val1[2] = dp[2];
		}
		
		
		for(int a=3;a<=x;a++)
		{
			if(dp[a]<0&&val1[a-2]>val1[a-1])
			{
				val1[a] = val1[a-2]; 
			}
			else if(dp[a]+val1[a-2]>val1[a-1])
			{	
				val1[a] = dp[a]+val1[a-2];
			}
			else
			{
				val1[a] = val1[a-1];
			}
		}
		
		cout << val1[x] << endl;
		
	}

	return 0;
}

