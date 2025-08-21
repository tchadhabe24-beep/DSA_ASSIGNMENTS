#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout << "Enter number of rows and columns: ";
    cin >>m >> n;

    int matrix[100][100], transpose[100][100];

    cout << "Enter elements of the matrix:"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> matrix[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of the matrix:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << transpose[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}

