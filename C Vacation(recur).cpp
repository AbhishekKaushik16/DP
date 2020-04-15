#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> e,int N,int i,int event){
	if(i==N)
		return 0;
	int ans = 0;
	for(int j=0;j<3;j++)
		if(event!=j)
			ans = max(ans,e[i][j] + solve(e,N,i+1,j));
	return ans;
}
int main(){
	int N,ans=0,i;
	cin>>N;
	vector<vector<int> > event(N,vector<int> (3));
	for(i=0;i<N;i++)
		cin>>event[i][0]>>event[i][1]>>event[i][2];
	for(i=0;i<3;i++)
		ans = max(ans,event[0][i]+solve(event,N,1,i));
	cout<<ans<<endl;	
}
