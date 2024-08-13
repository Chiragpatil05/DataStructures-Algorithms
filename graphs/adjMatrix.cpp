#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // n - number of vertex/nodes
    // m - nnumber of edges
    
    int n;
    cout << "enter the number of vertex : " ;
    cin >> n;
    
    int m;
    cout << "enter the number of edges : ";
    cin >> m;
    
    int adjacencyMatrix[n+1][n+1];
    
    // taking m edges(u->v) as input
    for(int i=0 ; i<m ; i++){
        int u,v;
        cin >> u >> v;
        adjacencyMatrix[u][v] = 1; // directed graph
        adjacencyMatrix[v][u] = 1; //undirected graph
    }
    
    // rest of the elements are 0
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(adjacencyMatrix[i][j] !=1){
                adjacencyMatrix[i][j] = 0;
            }
        }
    }
    
    // printing the adjacencyMatrix
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}