#include<iostream>
using namespace std;
int main(){
	int arr[100],n,i,temp;
	cout<<"enter the number of elements:"<<endl;
	cin>>n;
	cout<<"enter the elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				 temp= arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
			}
		
	
	cout<<"array after bubble sort:"<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
