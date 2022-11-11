#include<iostream>
using namespace std;
class MathematicalOperation{
	private:
		int n1,n2;
		public:
			void setValue(int x,int y){
			n1=x;
			n2=y;
			}
			void show(){
				int sum=0;
				sum=n1+n2;
				cout<<"Sum:"<<sum<<endl;
			}
};
int main(){
	MathematicalOperation obj1,obj2;
	int num1,num2;
	cout<<"Enter two integer:"<<endl;
	cin>>num1>>num2;
	obj1.setValue(num1,num2);
	obj2=obj1;
	obj1.show();
	obj2.show();
	return 0;
}
