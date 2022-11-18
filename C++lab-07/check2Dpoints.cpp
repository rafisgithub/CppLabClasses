#include<iostream>
using namespace std;
class MathematicalOperation{
	protected:
		int x,y;
		public:
			MathematicalOperation(int x1,int y1){
				x=x1;
				y=y1;
				if(x==5 || y==7 || x==0 || y==0){
					cout<<"The points are on the border.\n";
				}else if(x<5 && y<7){
					cout<<"The points are inside the border.\n";
				}else{
					cout<<"The points are outside the border.\n";
				}
			}
};
int main(){
	int x,y;
	while(1){
	cout<<"Enter points:"<<endl;
	cin>>x>>y;
	MathematicalOperation obj(x,y);
	}
	return 0;
}
