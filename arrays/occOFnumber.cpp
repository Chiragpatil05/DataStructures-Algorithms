// ---------------------- OCUURENCES OF A NUMBER ---------------------------------
#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,3,2,1,1,2,3,1,2,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target ;
    cout << "enter the value : ";
    cin >> target ;

    int occ=0;

    for(int i=0 ; i<size ; i++)
    {
        if(arr[i]==target)
        {
            occ++;
        }
    }

    cout << target << " -> " << occ << endl; 
    return 0;
}