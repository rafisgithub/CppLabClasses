#include<iostream>
using namespace std;
class Fact{
	private:
		int n,i,fact=1;
		public:
		Fact(int x){
			n=x;
		}
		friend int factOfN(Fact ob);	
};
 int factOfN(Fact ob){
	for(ob.i=1;ob.i<=ob.n;ob.i++){
		ob.fact*=ob.i;
	}
	return ob.fact;
}
int main(){
	int n,f;
	cout<<"Enter a integer:\n";
	cin>>n;
	Fact obj(n);
	cout<<"Factorial:"<<factOfN(obj);
	return 0;
}
