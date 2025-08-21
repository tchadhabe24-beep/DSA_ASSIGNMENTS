#include <iostream>
using namespace std;

int main() {
    int rows,cols;
    cout << "Enter number of rows and columns: ";
    cin >>rows>>cols;

    int matrix[100][100];
    cout << "Enter elements of the matrix:"<<endl;
    for (int i=0;i<rows;i++) {
        for (int j=0; j<cols; j++) {
            cin>>matrix[i][j];
        }
    }
    cout << "Sum of each row:"<<endl;
    for (int i=0; i<rows;i++) {
        int SumR = 0;
        for (int j = 0; j < cols; j++) {
            SumR += matrix[i][j];
        }
        cout <<"Row sum"<<SumR<< endl;
    }
    cout << "Sum of each column:"<<endl;
    for (int j=0; j<cols;j++) {
        int SumC=0;
        for (int i=0; i<rows;i++) {
            SumC += matrix[i][j];
        }
        cout <<"Column sum"<<SumC<<endl;
    }

    return 0;
}

