//nPr value
#include<iostream>
using namespace std;
int main(){
	int n,r,fact_n=1,fact_NminusR=1,nPr,i,j;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	cout<<"Enter the value of r: "<<endl;
	cin>>r;
	for(i=1;i<=n;i++){
		fact_n*=i;
	}
	for(j=1;j<=n-r;j++){
		fact_NminusR*=j;
	}
	nPr=fact_n/fact_NminusR;
	cout<<n<<"P"<<r <<" = "<<nPr;
	
}
