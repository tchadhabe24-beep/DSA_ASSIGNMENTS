#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter n:"<<endl;
	cin>>n;
	cout<<"enter the elements:"<<endl;
	int arr[100];
	for(i=0;i<n;i++){
		cin>>arr[i];}
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
			
			if(arr[i]>arr[j]){
				int temp= arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		}
		cout<<"new array is:"<<endl;
		for(i=0;i<n;i++){
			cout<<arr[i];
		}
    
    return 0;
}
