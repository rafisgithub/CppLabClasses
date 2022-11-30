#include<iostream>
#define PI 3.1416
using namespace std;
float AreaOfAcircle(){
	float r;
	cout<<"Enter radius of a circle.\n";
	cin>>r;
	return (PI*r*r);
}
int main(){
	cout<<"Area of this circle="<<AreaOfAcircle();
	return 0;
}
