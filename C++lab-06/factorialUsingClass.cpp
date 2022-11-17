#include<iostream>
using namespace std;
class Factorial{
	private:
		int n;
		public:
		void GetInput(){
			cout<<"Enter number:\n";
			cin>>n;
		}
		void fact(){
			int i,fact=1;
			for(i=1;i<=n;i++){
				fact*=i;
			}
			cout<<"factorial:"<<n<<"!= "<<fact;
		}
};
int main(){
	Factorial obj;
	obj.GetInput();
	obj.fact();
	return 0;
}
