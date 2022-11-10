#include<iostream>
using namespace std;
int main(){
	int f1=0,f2=1,fn=0,n;
	cout<<"Enter any numbers:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<f1<<" ";
		fn=f1+f2;
		f1=f2;
		f2=fn;
		
	}
	return 0;
}
