#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e3 ;
int main(int argc, const char** argv) {
    int N,i,j;
    cin>>N;
    vector<double> dp(N+1);
    dp[0] = 1;
    for(i=0;i<N;i++){
        double heads;
        cin>>heads;
        for(j=i+1;j>=0;--j){
            if(j==0)
                dp[j] = dp[j]*(1-heads);
            else
                dp[j] = dp[j-1]*heads + dp[j]*(1-heads);
        }
    }
    double answer = 0;
    for(i=0;i<=N;i++){
        if(i>N-i)
            answer+=dp[i];
    }
    printf("%.10lf\n",answer);
    
    return 0;
}