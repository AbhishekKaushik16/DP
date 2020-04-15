#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
    int N,K,i,k;
    cin>>N>>K;
    int H[N];
    for(i=0;i<N;i++)
        cin>>H[i];
    int ans[N];
    ans[0] = 0;
    ans[1] = abs(H[1]-H[0]);
    for(i=2;i<N;i++){
        int j = min(i,K);
        int temp = INT_MAX;
        for(k=1;k<=j;k++)
            temp = min(temp,ans[i-k]+abs(H[i]-H[i-k]));
        ans[i] = temp;
    }
    cout<<ans[N-1];
    return 0;
}
