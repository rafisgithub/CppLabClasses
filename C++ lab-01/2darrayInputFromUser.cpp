#include <iostream>
using namespace std;

int main(){
	int i,j,row =3,colum =3;
	
	int array[row][colum];//or int array[3][3];
	
	//Taking input from user
	cout<<"Taking inputs of 2D arrays:\n";
	for(i=0;i<row;i++){
		for(j=0;j<colum;j++){
			cin>>array[i][j];
		}
	}
	
	//displaying them
	cout<<"\n\n\nDisplaying them.\n";
	for(i=0;i<row;i++){
		for(j=0;j<colum;j++){
			cout<<array[i][j] <<" ";
		}
		cout<<endl;
	}
	return 0;
}
