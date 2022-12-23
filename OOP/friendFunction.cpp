#include<iostream>
using namespace std;
class Math{
	private:
		int id=23;
		string name="rafi";
	public:
	friend void display(Math &ob);
};
void display(Math &ob){
	cout<<"ID:"<<ob.id<<endl;
	cout<<"name"<<ob.name<<endl;
}
int main(){
	Math obj;
	display(obj);
	return 0;
}
