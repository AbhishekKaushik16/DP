#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
    int i,j;
    string s,t;
    cin>>s>>t;
    int n = s.length()+1;
    int m = t.length()+1;
    int L[n][m];
    //string M[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==0 || j==0)
                L[i][j] = 0;
            else if(s[i-1]==t[j-1]){
                L[i][j] = L[i-1][j-1]+1;
            }
            else 
                L[i][j] = max(L[i-1][j],L[i][j-1]);
        }
    }
    int index = L[n-1][m-1];
    char ans[index+1];
    ans[index] = '\0';
    i = n-1, j = m-1;
    while(i>0 && j>0){
        if(s[i-1]==t[j-1]){
            ans[index-1]=s[i-1];
            i--;
            j--;
            index--;
        }
        else if(L[i-1][j]>L[i][j-1])
            i--;
        else 
            j--;
    }
    cout<<ans<<"\n";
    return 0;
}