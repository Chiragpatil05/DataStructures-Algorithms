#include<bits/stdc++.h>
using namespace std;

void DFS(int node , vector<int> adjList[] , vector<bool> &visited , vector<int> &ans){
    visited[node] = 1;
    ans.push_back(node);

    for(int j=0 ; j<adjList[node].size() ; j++){
        if(visited[adjList[node][j]] == 0){
            DFS(adjList[node][j] , adjList , visited , ans);
        }
    }
}

int main(){
    int vertex;
    int edges;

    cout << "enter total number of vertices : ";
    cin >> vertex;

    cout << "enter total number of edges : ";
    cin >> edges;

    int u,v;

    vector<int> adjList[vertex];

    cout << "enter edge u->v : " << endl;
    
    for(int i=0 ; i<edges ; i++){
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    cout << "adjacenecy list = " << endl;
    for(int i=0; i<vertex ; i++){
        cout << i << " -> ";
        for(int j=0 ; j<adjList[i].size() ; j++){
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }

    // DFS : depth first search
    int start = 0;
    vector<bool> visited(vertex , 0);
    vector<int> ans;

    DFS(start , adjList , visited , ans);
    cout << "DFS : ";
    for(int x : ans) cout << x << " ";

    return 0;
}