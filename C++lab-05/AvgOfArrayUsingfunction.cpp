#include<iostream>
using namespace std;
int avg(long int arr[],int size){
	int i,sum=0,average;
	for(i=0;i<size;i++){
		sum=sum+arr[i];
	}
	average=sum/size;
	return average;
}
int main(){
	int size,i;
	cin>>size;
	long int arr[size];
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"The Average is:"<<avg(arr,size)<<endl;
}
