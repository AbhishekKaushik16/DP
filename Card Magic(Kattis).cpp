#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+9;
int main(){
	int T,N,K,i,t,k;
	cin>>N>>K>>T;
	int dp[N+1][N*K+1] = {0};
	for (i=1;i<K+1;i++)
		dp[1][i] = 1;
	for(i=2;i<N+1;i++){
		for(t=2;t<N*K+1;t++){
			int sum = 0;
			for(k = 1;k<K+1;k++){
				if(t-k>0) sum+=dp[i-1][t-k];
				if(sum>mod) sum%=mod;
			}
			dp[i][t] = sum;
		}
	}
	cout<<dp[N][T]<<endl;
}
