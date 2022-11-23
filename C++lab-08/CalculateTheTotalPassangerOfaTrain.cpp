#include<iostream>
using namespace std;
class Train{
	private:
		int c,p,i,totalP=0;
	public:
		void CalculateP(){
			cout<<"Enter numbers of compartment:\n";
			cin>>c;
			for(i=1;i<=c;i++){
				cout<<"Enter "<<i<<"th compartment numbers of passangers:\n";
				cin>>p;
				totalP+=p;
			}
		}
		void display(){
			cout<<"Total passanger:"<<totalP;
		}
		
};
int main(){
	Train obj;
	obj.CalculateP();
	obj.display();
	return 0;
}
