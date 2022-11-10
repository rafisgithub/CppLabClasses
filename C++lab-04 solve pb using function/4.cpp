//write a function that gets radius of a circle and return area
#include<iostream>
#define pi 3.1415
using namespace std;
float areaOfCircle(int r){
	return (pi*r*r);
}
int main(){
	int r;
	cout<<"Enter radius of Circle"<<endl;
	cin>>r;
	cout<<"Area of Circle is ="<<areaOfCircle(r);
	return 0;
}
