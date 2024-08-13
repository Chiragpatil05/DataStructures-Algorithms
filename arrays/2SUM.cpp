// ---------- TARGET SUM WITH PAIR ----------------
#include<iostream>
using namespace std;

int main(){
    int arr[]={3,4,6,7,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int x;
    cout << "enter the value : ";
    cin >> x;

    int pair = 0;
    for(int i=0 ; i<size ; i++)
    {
        for(int j=i+1 ; j<size ; j++)
        {
            if( arr[i] + arr[j] == x)
            {
                pair++;
            }
        }
    }
    cout << pair ;
    return 0;
}