#include<iostream>
using namespace std;
int main(){
	int r1,c1,r2,c2,i,j,r,c;
	cout<<"Enter first matrix row and colum:"<<endl;
	cin>>r1>>c1;
	long int A[r1][c1];
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			cin>>A[i][j];
		}
	}
	cout<<"Enter Second matrix row and colum:"<<endl;
	cin>>r2>>c2;
	long int B[r2][c2];
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			cin>>B[i][j];
		}
	}
	if(r1>r2)
	r=r1;
	else
	r=r2;
	if(c1>c2)
	c=c1;
	else 
	c=c2;
	long int S[r][c];
	//// Initializing elements of matrix to 0
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			S[i][j]=0;
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			S[i][j]=A[i][j]+B[i][j];
		}
	}

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<S[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}
