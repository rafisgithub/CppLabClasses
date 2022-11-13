#include<iostream>
using namespace std;
class myClass{
	private:
		int a;
		public:
			myClass(){
				cout<<"I'm from constructor.\n";
				a=10;
			}
			void show(){
				cout<<a<<"\n";
			}
};
int main(){
	myClass obj;
	obj.show();
	return 0;
}
