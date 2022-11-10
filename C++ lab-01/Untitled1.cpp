#include<iostream>
#include<math.h>
using namespace std;
int main(){
int num,count=0,i;

	cout<<"enter a number."<<endl;
cin>>num;
for(i=1;i<=num;i++){
	if(num%i==0){
		count++;
	}
}
if(count==2){
	printf("Prime num.\n");
}else{
	cout<<"not prime.\n";
}
	

}
