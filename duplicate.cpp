#include<iostream>
using namespace std;
int main(){
	int i,j,k,n,arr[100];
	cout<<"enter the number of elements:"<<endl;
	cin>>n;
	cout<<"enter the elements of the array:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
		}
		cout<<"the original array:"<<endl;
		for(i=0;i<n;i++){
			cout<<arr[i]<<" ";
			}
			for(i=0;i<n;i++){
				for(j=i+1;j<n;j++){
					if(arr[i]==arr[j]){
						for(k=j;k<n-1;k++){
						arr[k]=arr[k+1];	
						}
						n--;
						j--;
					}
				}
			}
			cout<<"the new array is:"<<" "<<endl;
			for(i=0;i<n;i++){
				cout<<arr[i];
		
			}
		
	return 0;
}
