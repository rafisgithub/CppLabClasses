#include<iostream>
using namespace std;
class QWERTY{//Base class or parent class
	public:
		void StreValues(int x,int y,int z){
			n1=x;
			n2=y;
			n3=z;
		}
	protected:
	int n1;
	int n2;
	int n3;
};
//derived class
class XYZ:public QWERTY{
	public:
		void CalculateLargestN(){
			if(n1>=n2 && n1>=n3){
		cout<<"Largest number is :"<<n1<<endl;
	}else if(n2>=n1 && n2>=n3){
		cout<<"Largest number is :"<<n2<<endl;
	}else{
		cout<<"Largest number is :"<<n3<<endl;
	}
		}
	
};
int main(){
	XYZ obj;
	int n1,n2,n3;
	cout<<"Enter three number:\n";
	cin>>n1>>n2>>n3;
	obj.StreValues(n1,n2,n3);
	obj.CalculateLargestN();
	return 0;
}
