#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
        unordered_map<int , list<int> > adjList;

        void addEdge(int u , int v , bool direction){
            // direction = 0 : undirected graph
            // direction = 1 : directed graph

            // make an edge u to v
            adjList[u].push_back(v);
            if(direction == 0){
                adjList[v].push_back(u);
            }
        }

        void printList(){
            for(auto i:adjList){
                cout << i.first << "->" ;
                for(auto j:i.second){
                    cout << j << " ";
                }
                cout << endl;
            }
        }
};

int main(){
    // n is the number of vertex or nodes in the graph
    // m is the number of edges(u to v) in the graph

    int n;
    cout << "enter the number of vertex/nodes in the graph : ";
    cin >> n;

    int m;
    cout << "enter the number of edges in the grah : ";
    cin >> m;

    graph g;

    for(int i=0 ; i<m ; i++){
        int u,v;
        cin >> u >> v;

        // creating an undirected graph;
        g.addEdge(u,v,0);
    }

    // printing the graph adjacency list
    g.printList();
}