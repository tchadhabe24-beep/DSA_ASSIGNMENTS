#include<iostream>
using namespace std;
int arr[100],n,i,key;
int binarySearch(){
	int s=0;
	int e=n;
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
		s=mid+1;
		} 
	}return -1;
}
int main(){
	cout<<"enter the number of elements:"<<endl;
	cin>>n;
	cout<<"enter the elements:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the element u want to search:"<<endl;
	cin>>key;
	cout<<" key is present at:"<< binarySearch() <<endl;
	return 0;
}
