#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	if(ch>='a' && ch<='z'|| ch>'A' && ch<='Z'){
		cout<<ch<<" is a Alphabet"<<endl;
	}else if(ch>='0' && ch<='9'){
		cout<<ch<<" is a Digit"<<endl;
	}else{
		cout<<ch<<" is a Specail character"<<endl;
	}
}
