#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char ch[1000];
	int n,i;
	cout<<"words number:"<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>ch[i];
	}
	for(i=0;i<n;i++){
		cout<<ch[i]<<" ";
	}
  

}
