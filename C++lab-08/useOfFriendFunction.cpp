#include<iostream>
using namespace std;
class MyClass{
	int n1,n2;
	public:
		MyClass(int x,int y){
			n1=x;
			n2=y;
		}
		friend int isFactor(MyClass ob);
};
int isFactor(MyClass ob){
	if(ob.n1%ob.n2==0)
	return 1;
	else 
	return 2;
}
int main(){
	int a,b,r;
	cin>>a>>b;
	MyClass obj(a,b);
	r=isFactor(obj);
	if(r==1)
	cout<<a<<" is divided by "<<b<<"\n";
	else
	cout<<a<<" is not divided by "<<b<<"\n";
	return 0;
}//Attribute(int variable)
