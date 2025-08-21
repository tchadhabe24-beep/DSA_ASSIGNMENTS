#include <iostream>
using namespace std;
int main(){

int arr[100],n,i,j,temp;
cout<<"enter the number of elements:"<<endl;
cin>>n;
cout<<"enter the elements:"<<endl;
for(i=0;i<n;i++){
	cin>>arr[i];
}
cout<<"the original array is:"<<endl;
for(i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
cout<<"the reversed array is:";
for(i=n-1;i>=0;i--){
	cout<<arr[i]<<" ";
	
	
}return 0;
}
