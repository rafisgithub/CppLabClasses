#include<iostream>
using namespace std;
int add(long int A[][],int r1, int c1,long int B[][], int r2, int c2){
	int r,c;
	if(r1>r2)
	r=r1;
	else
	r=r2;
	if(c1>c2)
	c=c1;
	else
	c=c2;
 long int C[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			 C[i][j]=A[i][j]+B[i][j];
		}
	}
	return C[i][j];
}
int main(){
	int r1,c1,r2,c2,i,j;
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
	cout<<add(A,r1,c1,B,r2,c2);
	
}
