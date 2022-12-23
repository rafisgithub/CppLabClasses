#include<iostream>
using namespace std;
class Student{
	private:
		string sID;
		string sName;
		string bloodGroup;
	public:
		//paramiterized constructor
		Student(string x,string y,string z){
			sID=x;
			sName=y;
			bloodGroup=z;
		}
     	//copy consturctor
	   Student(Student &s){
		cout<<"I'm from copy construcotor.\n";
	    sID=s.sID;
	    sName=s.sName;
	    bloodGroup=s.bloodGroup;
	    
	}
		//destructor
	~Student(){
		cout<<"i'm destructor.\n";
		cout<<"Student ID:"<<sID<<endl;
		cout<<"Student Name:"<<sName<<endl;
		cout<<"Blood Group:"<<bloodGroup<<endl;
	}

};
int main(){
	string id;
	string name;
	string bg;
	cout<<"Enter student ID:\n";
	cin>>id;
	cout<<"Enter studnet name:\n";
	cin>>name;
	cout<<"Etner blood group:\n";
	cin>>bg;
	Student obj1(id,name,bg);
	Student obj2(obj1);
	return 0;
}
