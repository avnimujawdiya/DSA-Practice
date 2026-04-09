#include <iostream>
using namespace std;

int main() 
{
    int r,c;
    int A[10][10],b[10][10],add[10][10], sub[10][10];

    cout << "Enter number of rows and columns: ";
    cin >>r>> c;

    cout << "Enter elements of matrix A: \n";
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>> A[i][j];
        }
    }


    cout << "Enter elements of Matrix B:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }
    
    
    for(int i =0 ; i<r ; i++){
        for(int j= 0; j<c ; j++){
            add[i][j] = A[i][j]+b[i][j];
            sub[i][j] = A[i][j]-b[i][j];
        }
    } 
    cout<< "\nMatrix Addition:";
    for (int i = 0; i<r; i++){
        for(int j =0; j<c ; j++){
            cout << add[i][j]<< "  ";
        }
        cout <<endl;

    }
    cout << "Matrix Subtraction: ";
    for(int i =0;i<r;i++){
        for(int j=0; j<c;j++){
            cout << sub [i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;





}