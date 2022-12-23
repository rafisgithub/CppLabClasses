#include<iostream>
using namespace std;
class MathematicalOp{
	private:
		int n,fact=1;
	public:
		MathematicalOp(){
			cout<<"I'm from constructor.\n";
			cout<<"Enter a entiger:\n";
			cin>>n;
		}
	void calculateFact(){
		for(int i=1;i<=n;i++){
			fact*=i;
		}
	}
    void show(){
    	cout<<"Factorial:"<<fact;
	}
};
int main(){
	MathematicalOp obj;
	obj.calculateFact();
	obj.show();
	
	return 0;
}
