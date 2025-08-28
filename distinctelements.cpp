#include<iostream>
using namespace std;
int main(){
	int n,i;
	int count =0;
	cout<<"enter number of elements:"<<endl;
	cin>>n;
	int arr[100];
	cout<<"enter the elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
		}
		for(i=0;i<n;i++){
			if(arr[i]!=arr[i+1]){
				count ++;
			}
		}
		cout<<"number of distict elements"<<count;
		
	return 0;
}

