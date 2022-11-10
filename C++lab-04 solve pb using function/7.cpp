//write a fucntion that gets any positive number and return sum of its digit
#include<iostream>
using namespace std;
int sumOfdigits(){
	int n,r,sum=0;
	cout<<"Enter numbers:"<<endl;
	cin>>n;
	while(n!=0){
		r=n%10;
		sum+=r;
		n/=10;
	}
return sum;
}
int main(){
cout<<sumOfdigits();
}
