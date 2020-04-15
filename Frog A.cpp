#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
/*---------------------------------------------------------------------------------------------------
　　　　　　　　　　　 ∧＿∧
　　　　　 ∧＿∧ 　（´<_｀ ）　 Welcome to My Coding Space!
　　　　 （ ´_ゝ`）　/　 ⌒i     @coding_abhi
　　　　／　　　＼　 　  |　|
　　　 /　　 /￣￣￣￣/　　|
　 ＿_(__ﾆつ/　    ＿/ .| .|＿＿＿＿
　 　　　＼/＿＿＿＿/　（u　⊃
---------------------------------------------------------------------------------------------------*/
int main(int argc, const char** argv) {
    int N,i,j;
    cin>>N;
    int H[N];
    rep(i,0,N)  cin>>H[i];
    int ans[N]={0};
    ans[0] = 0;
    ans[1] = abs(H[1] - H[0]);
    rep(j,2,N){
        ans[j] = min(ans[j-2]+ abs(H[j]-H[j-2]),ans[j-1]+ abs(H[j]-H[j-1]));
    }
    cout<<ans[N-1];
    return 0;
}