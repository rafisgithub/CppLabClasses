#include<iostream>
using namespace std;
int main(){
	int r1,c1,i,j;
	cout<<"Enter the first matrix row and colum:"<<endl;
	cin>>r1>>c1;
	long int A[r1][c1];
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			cin>>A[i][j];
		}
	}
	int r2,c2;
	cout<<"Enter the first matrix row and colum:"<<endl;
	cin>>r2>>c2;
	long int B[r2][c2];
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			cin>>B[i][j];
		}
	}
	
	int r,c;
	if(r1>=r2)
	r=r1;
	else
	r=r2;
	if(c1>=c2)
	c=c1;
	else
	c=c2;
	long int C[r][c];
	//Initializing elemets of matrix to 0
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			C[i][j]=0;
		}
	}
	//Multiplying matrix 
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			for(int k=0;k<c;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<C[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}
