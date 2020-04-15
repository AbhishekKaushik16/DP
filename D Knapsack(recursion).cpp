#include<bits/stdc++.h>
using namespace std;
int knapSack(int weight[],int value[],int i,int w,int W,int N){
	if(w>W)
		return INT_MIN;
	if(i==N || w==W)
		return 0;
	return max(value[i]+knapSack(weight,value,i+1,w+weight[i],W,N),knapSack(weight,value,i+1,w,W,N));
}
int main(){
	int N,W,i;
	cin>>N>>W;
	int weight[N],value[N];
	for(i=0;i<N;i++)
		cin>>weight[i]>>value[i];
	int ans = 0;
	ans = knapSack(weight,value,0,0,W,N);
	cout<<ans<<endl;
}
