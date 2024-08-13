#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int r1;
    cout << "enter row of matrix 1 :";
    cin >> r1;

    int c1;
    cout << "enter column of matrix 1 :";
    cin >> c1;

    int a[r1][c1];
    cout << "enter the elements of matrix 1 : " << endl;
    for(int i=0 ; i<r1 ; i++){
        for(int j=0 ; j<c1 ; j++){
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << "matrix 1 = " << endl;
    for(int i=0 ; i<r1 ; i++){
        for(int j=0 ; j<c1 ; j++){
            cout << a[i][j] << " ";
        }cout << endl;
    }

    int r2;
    cout << "enter row of matrix 2 :";
    cin >> r2;
    
    int c2;
    cout << "enter column of matrix 2 :";
    cin >> c2;

    int b[r2][c2];
    cout << "enter the elements of matrix 2 : " << endl;
    for(int i=0 ; i<r2 ; i++){
        for(int j=0 ; j<c2 ; j++){
            cin >> b[i][j];
        }
    }
    cout << endl;
    cout << "matrix 2 = " << endl;
    for(int i=0 ; i<r2 ; i++){
        for(int j=0 ; j<c2 ; j++){
            cout << b[i][j] << " ";
        }cout << endl;
    }

    int c[r1][c2];

    if(c1 != r2){
        cout << "matrix multiplication is not possible" << endl;
    }

    for(int i=0 ; i<r1 ; i++){
        for(int j=0 ; j<c2 ; j++){
            int value = 0;
            for(int k=0 ; k<r2 ; k++){
                value  += a[i][k] * b[k][j]; 
            }
            c[i][j] = value;
        }
    }

    cout << endl;
    cout << "matrix multiplication is : " << endl;
    for(int i=0 ; i<r1 ; i++){
        for(int j=0 ; j<c2 ; j++){
            cout << c[i][j] << " ";
        }cout << endl;
    }

    return 0;

}