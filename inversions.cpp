#include<iostream>
using namespace std;
int main(){
	int arr[100],n,i,j;
	int count=0;
	cout<<"enter the number of elements:"<<endl;
	cin>>n;
	cout<<"enter the elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if( i<j && arr[i]>arr[j]){
				count++;
			}
		}
	}
	cout<<" the number of inversions in an array:"<<count;
	return 0;
}
