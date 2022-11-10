//write a function that gets any positive integer and returns its reverse
#include<iostream>
using namespace std;
void reverseNumber(){
	int n,rem,rev=0;
	cin>>n;
	while(n!=0){
		rem=n%10;
		rev=rem+rev*10;
		n=n/10;
	}
	cout<<rev<<endl;
}
int main(){
	reverseNumber();
	return 0;
}
