// ---------- TARGET SUM WITH TRIPLET ----------------
#include<iostream>
using namespace std;

int main(){
    int arr[]={12, 3, 4, 1, 6, 9};

    int size = sizeof(arr)/sizeof(arr[0]);
    
    int x;
    cout << "enter the value : ";
    cin >> x;
    
    int trip = 0;
    for(int i=0 ; i<size ; i++)
    {
        for(int j=i+1 ; j<size ; j++)
        {
            for(int k=j+1 ; k<size ; k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    trip++;
                }
            }
        }
    }
    cout << trip ;
    
    return 0;
}
