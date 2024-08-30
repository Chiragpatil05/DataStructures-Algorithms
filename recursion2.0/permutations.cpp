#include<bits/stdc++.h>
using namespace std;

void permutation(int arr[] , vector<int> &temp , vector<bool> &visited , vector<vector<int>> &ans){
    if(temp.size() == visited.size()){
        ans.push_back(temp);
        return;
    }

    for(int i=0 ; i<visited.size() ; i++){
        if(visited[i] == 0){
            visited[i] = 1;
            temp.push_back(arr[i]);
            permutation(arr , temp , visited , ans);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}


int main(){
    int n;
    cout << "enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << "enter the elements of array : ";
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    vector<int> temp; // to store single permutation
    vector<vector<int>> ans; // to store all the permutations
    vector<bool> visited(n,0); // ye pata karne ke liye ki konsa element visit kar chuke hai

    permutation(arr , temp , visited , ans);
    
    // printing permutations
    for(int i=0 ; i<ans.size() ; i++){
        for(int j=0 ; j<ans[i].size() ; j++){
            cout << ans[i][j] << " " ;
        }
        cout << endl;
    }
}