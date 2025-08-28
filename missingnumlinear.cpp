#include<iostream>
using namespace std;
int arr[100],n,i;
int sum=0;
int missingNumber(){
	int tsum= (n*(n+1))/2;
	for(i=0;i<n-1;i++){
		sum+=arr[i];
		
	}
	return tsum-sum;
}
int main(){
	cout<<"enter n:"<<endl;
	cin>>n;
	cout<<"enter the elements:"<<endl;
	for(i=0;i<n-1;i++){
		cin>>arr[i];
	}
	cout<<"the missing number is:"<<missingNumber()<<endl;
	return 0;
}
