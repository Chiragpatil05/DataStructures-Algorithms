#include<iostream>
using namespace std;

int main(){
    int row,col;

    cout << "enter the number of rows :" ;
    cin >> row;

    cout << " enter the number of columns :";
    cin >> col;

    int arr[row][col];
    cout << "enter the elements of 2D array " << endl;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;

    cout << "printing the 2D array :" << endl;
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    int sum = 0;
    cout << "sum of elements of array is : ";
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            sum += arr[i][j];
        }
    }
    cout << sum ;
    cout << endl;

    int max = arr[0][0];
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    cout << " max = " << max << endl;

    return 0;
}