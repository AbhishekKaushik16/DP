#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, W,i,j,weight,value;
    cin>>n>>W;
    long long int dp[n+1][W+1]={0};
    for(j=0;j<=W;++j)
        dp[0][j] = 0;
    for(i=1;i<=n;++i){
        cin>>weight>>value;
        for(j=0;j<=W;++j){
            if(weight>j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-weight]+value);
        }
    }
    cout<<dp[n][W]<<endl;
    
}