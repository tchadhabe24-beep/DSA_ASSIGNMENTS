#include <iostream>
using namespace std;
int arr[100],i,n;
void create(){
	cout<<"enter the number of elements:"<<endl;
	cin>>n;
	cout<<"enter the elements of the array:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
		}
	}
	void display(){
		create();
		cout<<"original array:"<<" ";
		for(i=0;i<n;i++){
			cout<<arr[i]<<" ";
			}	}
		void insert(){
			display();
			int pos,num;
			cout<<"\nthe position where u want to insert the element:"<<endl;
			cin>>pos;
			cout<<"enter the number:"<<endl;
			cin>>num;
			for(i=n;i>pos;i--){
				arr[i]=arr[i-1];}
				arr[pos]=num;
				n++;
			cout<<"the new array:"<<" ";
			for(i=0;i<n;i++){
			cout<<arr[i]<<" "<<endl;
				}}
		 void dlt(){
		 	display();
		 	int pos;
		    cout<<"\nenter the position:"<<endl;
			cin>>pos;
			for(i=pos;i<n-1;i++){
				arr[i]=arr[i+1];
				}
				n--;
			cout<<"the new array:"<<" ";
			for(i=0;i<n;i++){
			cout<<arr[i]<<" ";
			}}
					void linearsearch(){
						display();
						int target;
						int pos=-1;
						cout<<"\nenter the element:"<<endl;
						cin>>target;
						for(i=0;i<n;i++){
							if (arr[i]==target){
								pos=i;
								break;}}
							if(pos!=-1)
							cout<<"element found at:"<<pos;
							else
							cout<<"element not found";
									}
							void exit(){
								cout<<"you have exited the programme.";
							}
	int main(){
	int choice;
	cout<< "menu:"<<endl;
	cout<<"1. create an array."<<endl;
	cout<<"2.display."<<endl;
	cout<<"3.insert."<<endl;
	cout<<"4.delete"<<endl;
	cout<<"5.linear search"<<endl;
	cout<<"6.exit"<<endl;
	cout<<"pick a choice from the menu above:"<<endl;
	cin>>choice;
	switch (choice) {
	case 1:
		create();
		break;
		case 2:
			display();
			break;
			case 3:
				insert();
				break;
				case 4:
					dlt();
					break;
					case 5:
						linearsearch();
						break;
						case 6:
							exit();
							break;
							default:
								cout<<"operation not found.";
	}
	return 0;
}
