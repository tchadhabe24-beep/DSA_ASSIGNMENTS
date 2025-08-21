#include<iostream>
using namespace std;
int main(){
	int r1,c1,r2,c2,i,j,k;
	cout<<"enter the number of rows and columns of matrix A:"<<endl;
	cin>> r1 >>c1;
	cout<<"enter the number of rows and columns of matrix B:"<<endl;
	cin>> r2 >>c2;
	if(c1!=r2){
		cout<<"multiplication not possible";
		return 0;
	}
	int A[100][100],B[100][100],result[100][100]={0};
	cout<<"enter the elements of matrix A:";
	for(i=0;i<r1;i++){
	 for(j=0;j<c1;j++){
			cin>>A[i][j];
		}
	}
	cout<<"enter the elements of matrix B:";
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			cin>>B[i][j];
		}
	}
	//multiplication logic
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			for(k=0;k<c1;k++){
				result[i][j]+= A[i][k]*B[k][j];
			}
		}
	}
	cout<<"the final matrix after multiplication is:"<<" ";
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			cout<<result[i][j];
		}
	}
	cout<<endl;
	
	return 0;
}
