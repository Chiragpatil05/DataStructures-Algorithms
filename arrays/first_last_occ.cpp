// ----------------------------- FIRST AND LAST OCCURENCE OF A ELEMENT ---------------------------------
#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,3,2,1,1,2,3,1,2,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target ;
    cout << "enter the value : ";
    cin >> target ;

    int first_occ = -1;
    int last_occ = -1;

    // first occurence = 
    for(int i=0 ; i<size ; i++)
    {
       if(arr[i]==target)
       {
         first_occ = i;
         break;
       }
    }

    //last occurence = 
    for(int i=size-1 ; i>=0 ; i--)
    {
        if(arr[i]==target)
        {
            last_occ = i;
            break ;
        }
    }

    cout << "first occurence of " << target << " is " << first_occ << endl; 
    cout << "last occurence of " << target << " is " << last_occ << endl; 

    return 0;
}