#include<iostream>
using namespace std;
int largest(long int arr[],int size){
	for(int i=1;i<size;i++){
		if(arr[0]<arr[i]){
			arr[0]=arr[i];
		}
	}
	return arr[0];
}
int smallest(long int arr[],int size){
	for(int i=1;i<size;i++){
		if(arr[0]>arr[i]){
			arr[0]=arr[i];
		}
	}
	return arr[0];
}

int main(){
	int size,i;
	cin>>size;
	long int arr[size];
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"The largest number is:"<<largest(arr,size)<<endl;
	cout<<"The smallest number is:"<<smallest(arr,size)<<endl;
}
