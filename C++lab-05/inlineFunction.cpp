//inline function in class
#include<iostream>
using namespace std;
class inlineFunction{
	private:
		int n1,n2,n3;
		public:
		 int getValue(int x,int y,int z){
				n1=x;
				n2=y;
				n3=z;
			}
		inline int disply(){
			return (n1>n2 && n1>n3?n1:(n2>n3 && n2>n1?n2:n3));
		}
};
int main(){
	inlineFunction obj;
	int n1,n2,n3;
	cout<<"Enter numbers:"<<endl;
	cin>>n1>>n2>>n3;
	obj.getValue(n1,n2,n3);
	cout<<"Max value:"<<obj.disply();
	return 0;
	
}
