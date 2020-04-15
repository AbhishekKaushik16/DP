#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,i,j,k,l,p;
	cin>>n>>m;
	int matrix[n][m];
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			cin>>matrix[i][j];
	int ans=0;
/*	for(l= 1;l<=min(n,m);l++){
		for(i=0;i<=n-l;i++){
			for(j=0;j<=m-l;j++){
				int flag=1;
				for(k=i;k<i+l;k++){
					for(p=j;p<j+l;p++){
						if(matrix[k][p]!=1)
							flag=0;
					}
				}
				ans+=flag;
			}
		}
	}
	*/
	for(i=1;i<n;i++)
		for(j=1;j<m;j++){
			if(matrix[i][j]){
				if(i-1>=0 && j-1>=0)
					matrix[i][j] = min(matrix[i-1][j-1],min(matrix[i-1][j],matrix[i][j-1]))+1;
				
			}
		}
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			ans+= matrix[i][j];
	cout<<ans;
}
