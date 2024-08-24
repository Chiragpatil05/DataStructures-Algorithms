#include<iostream>
using namespace std;

int LinearSearch(int arr[] , int n , int index , int target){
    if(index == n) return -1; 
    if(arr[index] == target) return index;
    else return LinearSearch(arr , n , index + 1 , target);
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

    int target;
    cout << "enter the element to be searched " ;
    cin >> target;

    int index = 0;

    int ans =  LinearSearch(arr , n , index , target);
    cout << target << " present at index = " << ans << endl;
    
    return 0;
}