#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
const int siz=2e5+7,Inf=1e9+7;
struct Node{
  int data;
  Node* next;
  Node(int val){
    data=val;
    next=nullptr;
  }
};

class LinkedList{
public:
    Node* Head;

    LinkedList(){
      Head=nullptr;
    }
    void push(int val){
    Node* temp=new Node(val);

    if(!Head){
      Head=temp;
      return;
    }
    Node* current=Head;
    while(current->next){
        current=current->next;
    }
    current->next=temp;
    }

};
void dfs(int vertex,int node,int visit[],LinkedList ll[]){
      if(visit[vertex]) return;
      visit[vertex]=1;
      Node* current=ll[vertex].Head;
      while(current){
        if(!visit[current->data]){
          cout<<current->data<<' ';
          dfs(current->data,vertex,visit,ll);
        }
        current=current->next;
      }

}
int main() {

int n,m; cin>>n>>m;
    LinkedList ll[n+1];
    for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      ll[x].push(y);
      ll[y].push(x);
    }
    int visit[50]={0};
    dfs(1,0,visit,ll);
    // for(int i=1;i<=n;i++){
    //   cout<<i<<' ';
    //   Node* temp=ll[i].Head;
    //   while(temp){
    //     cout<<temp->data<<' ';
    //     temp=temp->next;
    //   }
    //   cout<<nl;
    // }

  return 0;
}