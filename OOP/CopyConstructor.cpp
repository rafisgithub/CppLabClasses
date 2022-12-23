#include<iostream>
using namespace std;
class ABC{
	private:
		int n1;
		int n2;
		int n3;
	public:
		ABC(int x,int y,int z){
			cout<<"Contructor run successfully.\n";
			n1=x;
			n2=y;
			n3=z;
		}
		ABC(ABC &ob){
			cout<<"Copy contructor run successfully.\n";
			n1=ob.n1;
			n2=ob.n2;
			n3=ob.n3;
		}
		void calculate(){
			if(n1>=n2 && n1>=n2){
				cout<<"The greatest number "<<n1<<endl;
			}else if(n2>=n1 && n2>=n3){
				cout<<"The greatest number "<<n2<<endl;
			}else{
				cout<<"The greatest number "<<n3<<endl;
			}
		}
};
int main(){
	int x,y,z;
	cout<<"Eter three numbers:\n";
	cin>>x>>y>>z;
	ABC obj1(x,y,z);
	obj1.calculate();
	ABC obj2(obj1);
	obj2.calculate();
	return 0;
}
