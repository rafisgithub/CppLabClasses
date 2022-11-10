//factorial value of any given number
#include<iostream>
using namespace std;
int main(){
int num,i,factorial=1;
cin>>num;
for(i=1;i<=num;i++){
	factorial*=i;
}
cout<<"The factorial of "<<num<<"! = "<<factorial;
return 0;
}
