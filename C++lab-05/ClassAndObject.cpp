#include<iostream>
using namespace std;
class Student{
	public:
		int sID;
		string sName;
		void input(int sID,string sName){
//			cout<<"Enter your ID and Name:"<<endl;
//			cin>>sID>>sName;
	        cout<<"Your ID is="<<sID<<" and "<<"Name is:"<<sName;
		}
	
};
int main(){
	int sID;
	string sName;
	Student obj;
	cout<<"Enter your ID and Name:"<<endl;
	cin>>sID>>sName;
	obj.input(sID,sName);
	
}
