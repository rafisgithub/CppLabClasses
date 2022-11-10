//largest number of n numbers
#include<iostream>
using namespace std;
int main(){
	long int arr[100],num,i;
	cout<<"How to many numbers are you using to find largest one"<<endl;
	cin>>num;
	for(i=0;i<num;i++){
		cin>>arr[i];
	}
	for(int j=1;j<num;j++){
		if(arr[0]<arr[j]){
			arr[0]=arr[j];
		} 
	}
		cout<<"The largest number is ="<<arr[0];
	return 0;
}
