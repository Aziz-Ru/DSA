#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

vector<int>v[1000];

void dfs(int node){
  stack<int> ds;
  int visit[1000]={0};
  ds.push(node);
  while(!ds.empty()){
    int cur=ds.top();
    ds.pop();
    if(!visit[cur]){
      cout<<cur<<' ';
      visit[cur]=1;
    }
    for(auto x:v[cur]){
      if(!visit[x]){
        ds.push(x);
      }
    }
  }
}

int main() {
 int n,m;
 cin>>n>>m;
 for(int i=0;i<m;i++){
  int x,y;
  cin>>x>>y;
  v[x].push_back(y);
  v[y].push_back(x);
 }
dfs(1);
  return 0;
}