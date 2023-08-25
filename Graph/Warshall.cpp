#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nl '\n'
const int Inf=1e9;

int main() {

int n,m,q;
  cin>>n;
  int dist[n+1][n+1];

  for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
    int x; cin>>x;
    if(x!=0)dist[i][j]=x;
    else dist[i][j]=Inf;
    }

  }

  for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
      }
    }
  }
for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
    cout<<dist[i][j]<<' ';
  }
  cout<<nl;
}
  return 0;

}