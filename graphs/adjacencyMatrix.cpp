#include<bits/stdc++.h>
using namespace std;

int main(){
    int vertex;
    int edges;

    cout << "enter total number of vertex = ";
    cin >> vertex;

    cout << "enter total number of edges = ";
    cin >> edges;

    vector<vector<bool> > adjMat(vertex , vector<bool>(vertex , 0));

    int u;
    int v;

    cout << "enter the edges : " << endl;
    for(int i=0 ; i<edges ; i++){
        cin >> u >> v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }

    cout << "adjacency matrix is : " << endl;
    for(vector<bool> arr : adjMat){
        for(int x : arr) cout << x << " ";
        cout << endl;
    }
}