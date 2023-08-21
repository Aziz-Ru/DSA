#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nl '\n'


int main() {

int n,m,q;
  cin>>n>>m>>q;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i==j)dist[i][j]=0;
      else dist[i][j]=Inf;

    }
  }

  for(int i=1;i<=m;i++){
    int x,y,wt;
    cin>>x>>y>>wt;
    dist[x][y]=min(wt,dist[x][y]);
    dist[y][x]=min(wt,dist[y][x]);
  }
  
  for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
      }
    }
  }
  while(q--){
    int x,y;
    cin>>x>>y;
    if(dist[x][y]!=Inf) cout<<dist[x][y]<<nl;
    else cout<<"-1"<<nl;
  }
  return 0;
}