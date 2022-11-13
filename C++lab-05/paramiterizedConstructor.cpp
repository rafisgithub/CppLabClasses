//A constructor which has parameters is called parameterized constructor. It is used to provide 
//different values to distinct objects.
#include<iostream>
using namespace std;
class MathematicalOp{
	private:
		int x,y;
		public:
		MathematicalOp(int n1,int n2){
			cout<<"I'm from constructor.\n";
			x=n1;
			y=n2;
		}	
		void sum(){
			int sum=0;
			sum=x+y;
			cout<<"Sum ="<<sum;
		}
};
int main(){
	int n1,n2;
	cout<<"Enter two number:"<<endl;
	cin>>n1>>n2;
	MathematicalOp obj(n1,n2);
	obj.sum();
	return 0;
}
