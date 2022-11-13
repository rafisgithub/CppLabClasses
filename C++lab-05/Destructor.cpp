#include<iostream>
using namespace std;
class myClass{
	private:
		int x,y;
		public:
			myClass(){
				cout<<"I'm from Constructor.\n";
				x=20;
				y=30;
			}
			void show(){
				cout<<"x="<<x<<" and "<<"y="<<y<<"\n";
			}
			~myClass(){
				cout<<"I'm from Destructor\n";
				cout<<"x=~"<<x<<" and "<<"y=~"<<y<<"\n";
				
			}
};
int main(){
	myClass obj1;
	obj1.show();
	myClass obj2;
	myClass obj3;
	return 0;
}
