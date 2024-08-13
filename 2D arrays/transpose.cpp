#include<iostream>
using namespace std;

int main(){
    int r,c ;
    cin >> r >> c;

    int matrix[r][c];
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "matrix is = " << endl;;
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cout << matrix[i][j] << " ";
        }cout << endl;
    }
    cout << endl;

    int transpose[c][r];
    for(int i=0 ; i<c ; i++){
        for(int j=0 ; j<r ;j++){
            transpose[i][j] = matrix[j][i];
        }
    }

    cout << "transpose = " << endl;
    for(int i=0; i<c ; i++){
        for(int j=0 ; j<r ; j++){
            cout << transpose[i][j] << " ";
        }cout << endl;
    }

    return 0;
}