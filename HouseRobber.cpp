#include<bits/stdc++.h>
using namespace std;
/*int maxCost(vector<int> cost,int i){
	if(i<0)
		return 0;
	return max(maxCost(cost,i-1),maxCost(cost,i-2)+cost[i]);	
}*/	
int main(){
	int n;
	cin>>n;
	vector<int> nums(n),dp(n,0);
	for(int i=0;i<n;i++)
		cin>>nums[i];
		
	dp[0] = nums[0];
	dp[1] = max(dp[0],nums[1]);
	for(int i=2;i<n;++i)
		dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
	cout<<dp[n-1];
	return 0;
}
