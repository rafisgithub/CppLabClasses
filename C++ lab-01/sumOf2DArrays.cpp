#include <iostream>
using namespace std;

int main(){
	int i,j,row =3,colum =3,sum =0;
	
	int array[row][colum];
	//Taking input from user
	cout<<"Taking inputs of 2D arrays:\n";
	for(i=0;i<row;i++){
		for(j=0;j<colum;j++){
			cin>>array[i][j];
		}
	}

	//Adding them
	
	for(i=0;i<row;i++){
		for(int j=0;j<colum;j++){
			sum +=array[i][j];
		}
	}
	
	cout<<"Sum of the all elements of 2D array: "<<sum;
	return 0;
}
