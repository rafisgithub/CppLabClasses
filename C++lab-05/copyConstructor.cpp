#include<iostream>
using namespace std;
class Student{
	private:
		int sID;
		string sName;
		public:
			Student(int id,string name){//parameterized constructor
			cout<<"I'm from parameterized constructor\n";
			sID=id;
			sName=name;
			}
			Student(Student &obj){//Copy constructor
				cout<<"Copy contructor runs successfully.\n";
				sID=obj.sID;
				sName=obj.sName;
			}
			void show(){
				cout<<"Name:"<<sName<<" and "<<"ID:"<<sID<<"\n";
			}
};
int main(){
	int id;
	string name;
	cout<<"Enter your name:"<<endl;
	cin>>name;
	cout<<"Enter your ID:"<<endl;
	cin>>id;
	Student obj1(id,name);
	Student obj2(obj1);//copy constructor is called
	obj2.show();
	return 0;
}
