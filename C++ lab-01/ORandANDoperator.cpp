#include<iostream>
using namespace std;
int main(){
	int x=1,a,b;
	if(--x || --x){
		printf("I'm ||\n");
	}
	if(--x && --x){
		printf("I'm &&'\n");
	}
}
