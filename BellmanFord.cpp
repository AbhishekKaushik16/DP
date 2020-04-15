#include<bits/stdc++.h>
using namespace std;
#define INF 10
struct edge{
	int u;
	int v;
	int weight;
};
int main(){
	int N,M,i,j,x,y,w;
	cin>>N>>M;
	edge arr[M];
	for(i=0;i<M;i++){
		cin>>x>>y>>w;
		arr[i].u=x;
		arr[i].v=y;
		arr[i].weight=w;	
	}
	int d[N+1];
	
	for(i=0;i<=N;i++)
		d[i]=INF;
		
	d[0] = 0,d[1]=0; 
	
	for(i=1;i<=N-1;i++)
		for(j=0;j<M;j++){
			int ini = arr[j].u;
			int wgt = arr[j].weight;
			int lst = arr[j].v;
			if(d[ini] + wgt < d[lst] && ini != INF)
				d[lst] = d[ini] + wgt;
		}
		
	for(j=0;j<M;j++){
		int ini = arr[j].u;
		int wgt = arr[j].weight;
		int lst = arr[j].v;
		if(d[ini] + wgt < d[lst])
			cout<<"Graph contains negative cycle\n";
	}
		
			
}
