#include <iostream>
using namespace std;
int main(){
	//declare and intialize of 2D arrays
	int row =3;
	int colum = 3;
	int array[3][3] = {{32,54,32},{54,67,23},{23,34,65}};
	
	//displaying of the elements of 2D arrays
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<array[i][i]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
