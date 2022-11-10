//write a function that gets length and width of a rectangle and return area
#include<iostream>
using namespace std;
int rectangleArea(){
	int l,w;
	cin>>l>>w;
	return (l*w);
}
int main(){
	cout<<rectangleArea();
}
