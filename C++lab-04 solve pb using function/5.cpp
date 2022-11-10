//write a function that gets three numbers and returns medium
#include<iostream>
using namespace std;
int mediumOfthreenumbers(int x,int y,int z){
if(x>=y && x<=z || x<=y && x>=z){
	return x;
}else if(y>=x && y<=z || y<=x && y>=z){
	return y;
}else{
	return z;
}

}
int main(){
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	cout<<mediumOfthreenumbers(n1,n2,n3);
	return 0;
}
