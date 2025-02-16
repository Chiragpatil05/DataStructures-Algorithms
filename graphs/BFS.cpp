#include<bits/stdc++.h>
using namespace std;

/* 
    time complexity : O(V) + O(2E) = O(V+2E)
        O(V) : we will traverse all vertex 1 time
        O(2E) : we will traverse edge 2 time (0->1 and 1->0)

    space complexity : O(V) + O(V)
        O(V) : for visited array having size of vertex
        O(V) : for queue , at worst contain all vertex
*/

vector<int> BFSTraversal(int vertex , vector<int> adjList[]){
    queue<int> q;
    vector<bool> visited(vertex , 0);

    q.push(0);
    visited[0] = 1;

    vector<int> ans;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(int j=0 ; j<adjList[node].size() ; j++){
            if(visited[adjList[node][j]] == 0){
                visited[adjList[node][j]] = 1;
                q.push(adjList[node][j]);
            }
        }
    }
    return ans;
}

int main(){
    // first we will create adjacency list
    int vertex;
    int edges;

    cout << "enter total number of vertex : ";
    cin >> vertex;

    cout << "enter total number of edges : ";
    cin >> edges;

    vector<int> adjList[vertex];

    int u,v;
    cout << "enter the edges u->v" << endl;

    for(int i=0 ; i<edges ; i++){
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    cout << "adjacency list : " << endl;
    for(int i=0 ; i<vertex ; i++){
        cout << i << " -> ";
        for(int j=0 ; j<adjList[i].size() ; j++){
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    // BFS Traversal
    vector<int> bfs = BFSTraversal(vertex , adjList);
    cout << "BFS traversal is : " << endl;
    for(int x : bfs) cout << x << " ";

    return 0;
}