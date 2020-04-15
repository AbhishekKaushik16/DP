#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int dp[n+1]={0};
	dp[0] = 0;
	dp[1] = 1;
	int prev = 1;
	for(i=2;i<=n;i++){
		if(i>=2*prev)
			prev*=2;
		int temp = i^(prev);
		dp[i] = dp[temp]+1;
	}
	for(i=0;i<=n;i++)
		cout<<dp[i]<<" ";
		
}
