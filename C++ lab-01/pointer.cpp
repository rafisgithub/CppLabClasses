//Pointer is a kind of variabe which point to an address of another variable.
#include<iostream>
using namespace std;
int main(){
	int x;
	int *ptr;
	x=10;
	ptr=&x;
	*ptr=*ptr+1;
	cout<<x<<endl;
	cout<<&x<<endl;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	
	return 0;
}
