#include<iostream>
using namespace std;
class Prime{
	private:
		int n;
	public:
		void getInput(){
			cout<<"Enter any number:"<<endl;
			cin>>n;
		}
		void calculate(){
			int i,counter=0;
			for(int i=2;i<=n/2;i++){
				if(n%i==0){
					counter++;
				}
			}
			if(counter==0){
				cout<<"Prime number."<<endl;
			}else{
				cout<<"Not prime number."<<endl;
			}
		}
};
int main(){
	Prime obj;
	obj.getInput();
	obj.calculate();
	return 0;
}
