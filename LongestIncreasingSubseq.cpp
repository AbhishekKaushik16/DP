#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	int dp[n+1] = {1};
	dp[0]=0;
	for(i=1;i<=n;i++)
		for(j=0;j<i;j++){
			if(arr[i]>=arr[j])
				dp[i] = max(dp[i],dp[j]+1);
		}
	
	cout<<dp[n]<<endl;
}
