#include<iostream>
using namespace std;
int main(){
	int n,r,fact_n=1,fact_r=1,fact_NminuR=1,i,j,k,nCr;
	cout<<"Enter value of n: "<<endl;
	cin>>n;
	cout<<"Enter value of r: " <<endl;
	cin>>r;
	for(i=1;i<=n;i++){
		fact_n*=i;
	}
	for(j=1;j<=r;j++){
		fact_r*=j;
	}
	for(k=1;k<=n-r;k++){
		fact_NminuR*=k;
	}
	nCr=fact_n/(fact_r*fact_NminuR);
	cout<<n<<"C"<<r <<" = "<<nCr;
}
