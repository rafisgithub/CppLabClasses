//sum of seriese 1+2+4+8+.....+n
#include<iostream>
using namespace std;
//void sumOf(int num){
//	int i,value=1,sum=0;
//	for(i=1;i<=num;i++){
//		sum+=value;
//		value*=2;
//	}
//	cout<<sum<<endl;
//}
void sumOfdouble(int num){
	int i,sum=0;
	for(i=1;i<=num;i=i*2){
		sum=sum+i;
	}
	cout<<sum<<endl;
}

int main(){
	int num;
	cin>>num;
//	sumOf(num);
	sumOfdouble(num);
	
}
