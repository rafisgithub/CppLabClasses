#include<iostream>
using namespace std;
class box{
	public:
		int l,w,h,volume;
		void input(){
			cout<<"Enter length,width,and height of box:"<<endl;
			cin>>l>>w>>h;
		}
		void calculateVolume(){
			 volume=l*w*h;
		}
		void display(){
		
			cout<<"box volume is:"<<volume<<endl;
		}
};
int main(){
	box obj;
	obj.input();
	obj.calculateVolume();
	obj.display();
}
