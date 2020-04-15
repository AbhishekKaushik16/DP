#include<bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;
int main(){
	int n,i,j,sum;
	cin>>n;
	int coins[n];
	for(i=0;i<n;i++)
		cin>>coins[i];
	cin>>sum;
	vector<int> dp(sum+1,INF);		//dp[i] is the minimum number of coins needed to get a sum of i
	dp[0] = 0;
	for(i=1;i<=sum;i++){
		for(j=0;j<n;j++){
			if(coins[j]<=i){
				dp[i] = min(dp[i],dp[i-coins[j]]+1);
			}
		}
	}
	cout<<dp[sum]<<endl;	
}
