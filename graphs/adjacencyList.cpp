#include<bits/stdc++.h>
using namespace std;

int main(){
    int vertex;
    int edges;

    cout << "enter total number of vertex = ";
    cin >> vertex;

    cout << "enter total number of edges = ";
    cin >> edges;

    /* ---- for undirected unweighted graph -----------------

        vector<int> adjList[vertex];

        int u , v;
        cout << "enter the edges" << endl;
        
        for(int i=0 ; i<edges ; i++){
            cin >> u >> v;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        for(int i=0 ; i<vertex ; i++){
            cout << i << " -> ";
            for(int j=0 ; j<adjList[i].size() ; j++){
                cout << adjList[i][j] << " ";
            }
            cout << endl;
        }

    */

    // for undirected weighted graph
    vector<pair<int , int>> adjList[vertex];

    int u , v , weight;
    cout << "enter edges and weight" << endl;

    for(int i=0 ; i<edges ; i++){
        cin >> u >> v >> weight ;
        adjList[u].push_back(make_pair(v , weight));
        adjList[v].push_back(make_pair(u , weight));
    }

    for(int i=0; i<vertex ; i++){
        cout << i << " -> ";
        for(int j=0 ; j<adjList[i].size() ; j++){
            cout << "[" << adjList[i][j].first << "," << adjList[i][j].second << " " << "]";
        }
        cout << endl;
    }
}