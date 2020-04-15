#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18L + 5;
int main(int argc, const char** argv) {
    int N,W,i,j;
    int total_value=0;

    cin>>N>>W;
    vector<int> weight(N),value(N);

    for(i=0;i<N;i++)
        cin>>weight[i]>>value[i];

    for(int k:value)
        total_value += k;

    vector<ll> dp(total_value+1, INF);         //dp[i] is minimum total weight of items with total values exactly i
    dp[0] = 0;

    for(i=0;i<N;++i){
        for(j = total_value - value[i];j>=0;--j)
            dp[j+value[i]] = min(dp[j+value[i]],dp[j]+weight[i]);
    }

    ll ans= 0;
    for(i=0;i<=total_value;++i)
        if(dp[i]<=W)
            ans = max(ans,(ll)i);
    cout<<ans<<"\n";
    return 0;
}