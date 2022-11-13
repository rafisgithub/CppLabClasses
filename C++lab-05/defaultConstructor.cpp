//A constructor which has no argument/parameter is known as default constructor.
#include<iostream>
using namespace std;
class Student{
	private:
		int sID;
		string sName;
		public:
			Student(){
				cout<<"I'm form constructor.\n";
				sID=150;
				sName="Rafi Ahmed";
			}
			void show(){
				cout<<"Name:"<<sName<<" and "<<"ID"<<sID;
			}
};
int main(){
	Student obj;
	obj.show();
	return 0;
}
