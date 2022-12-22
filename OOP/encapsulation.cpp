#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int age;
		int height;
	public:
		int getAge(string s,int a,int h){
			name=s;
			age=a;
			height=h;
			return 0;
		}
		void display(){
			cout<<"Name :"<<name<<endl;
			cout<<"Age :"<<age<<endl;
			cout<<"Height :"<<height<<endl;
		}
};
int main(){
	Student ob;
	string name;
	int age;
	int height;
	cout<<"Enter your name:"<<endl;
	cin>>name;
	cout<<"Enter your age:"<<endl;
	cin>>age;
	cout<<"Eter your height:"<<endl;
	cin>>height;
	ob.getAge(name,age,height);
	ob.display();
	return 0;
}
