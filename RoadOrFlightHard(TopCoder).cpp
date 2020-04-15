#include<bits/stdc++.h>
using namespace std;
void setArray(int arr[],int first,int prod,int add,int mod,int N){
	arr[0] = first%mod;
	for(int i=1;i<N;++i)
		arr[i] = (arr[i-1]*prod + add)%mod;
}
void show(int arr[],int N){
	for(int i=0;i<N;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}
int knapSack(int flightTime[],int roadTime[],int i,int w,int W,int N){
	if(w>W)
		return INT_MAX;
	if(i==N)
		return 0;
	
	return min(flightTime[i]+knapSack(flightTime,roadTime,i+1,w+1,W,N),roadTime[i]+knapSack(flightTime,roadTime,i+1,w,W,N));
}
int main(){
	int N,roadFirst,roadProd,roadAdd,roadMod,flightFirst,flightProd,flightAdd,flightMod,K;
	cin>>N>>roadFirst>>roadProd>>roadAdd>>roadMod>>flightFirst>>flightProd>>flightAdd>>flightMod>>K;
	int flightTime[N],roadTime[N];
	setArray(flightTime,flightFirst,flightProd,flightAdd,flightMod,N);
	setArray(roadTime,roadFirst,roadProd,roadAdd,roadMod,N);
	show(flightTime,N);
	show(roadTime,N);
	int ans=0;
	ans = knapSack(flightTime,roadTime,0,0,K,N);
	cout<<ans<<endl;
}
	
