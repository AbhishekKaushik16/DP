#include<bits/stdc++.h>
using namespace std;
const int  mod = 1e9 + 7;
int main(int argc, const char** argv) {
    int H,W,i,j;
    cin>>H>>W;
    char matrix[H][W];
    int dp[H][W]={0};
    dp[0][0] = 1;
    
    for(i=0;i<H;i++)
        for(j=0;j<W;j++)
            cin>>matrix[i][j];

    for(i=1;i<H;i++)
        if(matrix[i][0]=='.')
            dp[i][0] = dp[i-1][0];
        else
            dp[i][0] = 0;

    for(i=1;i<W;i++)
        if(matrix[0][i]=='.')
            dp[0][i] = dp[0][i-1];
        else
            dp[0][i] = 0;

    
    for(i=1;i<H;i++){
        for(j=1;j<W;j++)
            if(matrix[i][j]=='#')
                dp[i][j] = 0;
            else
                dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;
    }
    cout<<dp[H-1][W-1]<<endl;
    return 0;
}