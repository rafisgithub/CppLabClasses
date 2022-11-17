#include<iostream>
#include<string>
using namespace std;
class MyClass{
	private:
		string name;
		int id;
		public:
			MyClass(string x,int y){
				name=x;
				id=y;
			}
			~MyClass(){
				cout<<"You name:"<<name<<endl;
				cout<<"your ID:"<<id<<endl;
			}
};
int main(){
	string name;
	int id;
	cout<<"Enter your name:\n";
	getline(cin,name);
	cout<<"Enter your ID:\n";
	cin>>id;
	MyClass obj(name,id);
	return 0;
}
