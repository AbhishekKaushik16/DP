#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e5+5;
vector<int> edges[MAX];
int dist[MAX];
int in_degree[MAX];
bool visited[MAX]={false};
void dfsUtil(int s){
    visited[s] = true;
    for(auto i : edges[s]){
        dist[i] = max(dist[i],dist[s]+1);
        --in_degree[i];
        if(!in_degree[i])
            dfsUtil(i);
    }
}
int main(int argc, const char** argv) {
    int N,M,i,j,x,y;
    cin>>N>>M;
    for(i=0;i<M;++i){
        cin>>x>>y;
        edges[x].push_back(y);
        ++in_degree[y];
    }
    for(i=1;i<=N;i++)
        if(!visited[i] && in_degree[i]==0)
            dfsUtil(i);
    int answer = 0;
    for(i=0;i<=N;++i)
        answer = max(answer,dist[i]);
    cout<<answer<<endl;
    return 0;
}