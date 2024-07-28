#include <bits/stdc++.h>
using namespace std;

bool isSafe(int node,int color[],bool graph[10][10],int n, int col){
   for(int k=0;k<n;k++){
// If edge bw current and another node(graph[k][node] == 1), and the other node is already colored with col
    if(k != node && graph[k][node]==1 && color[k]==col){
        return false;
    }
   }
   return true;
}
bool solve(int node,int color[],int m,int N,bool graph[10][10]){
    if(node==N){ //all nodes colored
        return true;
    }
    for(int i=1;i<=m;i++){// color
        if(isSafe(node,color,graph,N,i)){
            color[node]=i;
            if(solve(node+1,color,m,N,graph))
                return true;
            color[node]=0; //backtracking [else]
        }
    }
    return false;//not possible to color
}
bool graphColoring(bool graph[10][10],int m, int N){
    int color[N]={0};
    if(solve(0,color,m,N,graph))
        return true;
    return false; //else
}

int main(){
    int N=4; //nodes
    int m=3; //colors

    bool graph[10][10];
    memset(graph,false,sizeof graph);
// Edges are (0, 1),(1, 3),(2, 3),(3, 0),(0, 2)
  graph[0][1] = 1; graph[1][0] = 1;
  graph[1][3] = 1; graph[3][1] = 1;
  graph[2][3] = 1; graph[3][2] = 1;
  graph[3][0] = 1; graph[0][3] = 1;
  graph[0][2] = 1; graph[2][0] = 1;
  cout << graphColoring(graph, m, N);
}

/*
1
Time Complexity: O( N^M) (n raised to m)

Space Complexity: O(N)
*/
