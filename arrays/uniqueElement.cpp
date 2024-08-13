// ----------------- FIND UNIQUE ELEMENT IN ARRAY --------------
#include<iostream>
using namespace std;

int main(){
    int arr[]={-5,0,12,66,-5,12,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int ans=0;
    for(int i=0 ; i<size ; i++)
    {
        ans = ans^arr[i];
    }
    cout << ans;
    return 0;
}


// int main()
// {
//     int arr[]={3,2,7,4,2,3,7};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0 ; i<size ; i++)
//     {
//         for(int j=i+1 ; j<size ; j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 arr[i]=arr[j]=-1;
//             }
//         }
//     }

//     int unique=0;
//     for(int i=0 ; i<size ; i++)
//     {
//         if(arr[i]>0)
//         {
//             unique = arr[i];
//         }
//     }
//     cout << unique;
// }