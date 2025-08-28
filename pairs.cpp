#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"enter n:"<<endl;
	cin>>n;
	cout<<"enter the elements:"<<endl;
	int arr[100];
	int count=0;
	
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the diff:"<<endl;
	cin>>k;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(i<j && abs(arr[i]-arr[j])==k){
				count++;
			}	}	}
	cout<<"number of pairs:"<<count;
    
    return 0;
}
