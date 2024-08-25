#include<bits/stdc++.h>
using namespace std;

void subsequence(int arr[] , int n , int index , vector<int> temp , vector<vector<int>> &ans){
    if(index == n){
        ans.push_back(temp);
        return;
    }

    // exclude - NO
    subsequence(arr , n , index + 1 , temp , ans);

    // include - YES
    temp.push_back(arr[index]);
    subsequence(arr , n , index + 1 , temp , ans);
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

    int index = 0;
    vector<int> temp; // to store subsets/subsequence
    vector<vector<int>> ans; // to store the result;

    subsequence(arr , n , index , temp , ans);
    cout << "total subsequences are : " << pow(2,n) << endl;
    cout << "Array subsequences are : " << endl;
    for(int i=0 ; i<ans.size() ; i++){
        for(int j=0 ; j<ans[i].size() ; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}