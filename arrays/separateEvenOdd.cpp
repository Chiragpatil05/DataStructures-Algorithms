#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << n;

    cout << " array is : ";
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int leftPtr = 0;
    int rightPtr = n-1;

    while(leftPtr<=rightPtr){
        if(arr[leftPtr]%2==1 && arr[rightPtr]%2==0){//left mai odd number and right mai even number
            swap(arr[leftPtr],arr[rightPtr]);
            leftPtr++;
            rightPtr--;
        }
        if(arr[leftPtr]%2==0){ // even number hai
            leftPtr++;
        }
        if(arr[rightPtr]%2==1){ // odd number hai
            rightPtr--;
        }
       
    }
    cout << "even at left and odd at right separted array is: ";
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}