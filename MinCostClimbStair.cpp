#include<bits/stdc++.h>
using namespace std;
int ans;
int minCost(vector<int> cost,size_t i){
	if(i>cost.size())
		return 0; 
	if(i==cost.size())
		return ans;
	ans = cost[i]+ min(minCost(cost,i+1),minCost(cost,i+2));
	return ans;
}
int main(){
	int i,temp,n;
	cin>>n;
	vector<int> cost;
	for(i=0;i<n;++i){
		cin>>temp;
		cost.push_back(temp);
	}
	min(minCost(cost,0),minCost(cost,1));
	cout<<ans<<endl;
}
