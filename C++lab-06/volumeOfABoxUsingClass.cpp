#include<iostream>
using namespace std;
class Box{
	public:
		int height,width,length;
		public:
			void PrintVolume(int x,int y,int z){
				int volume;
				height=x;
				width=y;
				length=z;
				volume=x*y*z;
				cout<<"Volume of the box ="<<volume;
				
			}
};
int main(){
	Box obj;
	int h,w,l;
	cout<<"Enter the heith,length,width of the box:"<<endl;
	cin>>h>>w>>l;
	obj.PrintVolume(h,w,l);
	return 0;
}
