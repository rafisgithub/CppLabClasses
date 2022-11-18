#include<iostream>
using namespace std;
void checkCharacter(char ch){
		if((ch>=97 && ch<=122) || (ch>=65 && ch<=90)){
		cout<<ch <<" is a Alphabet."<<endl;
	}else if(ch>=48 && ch<=57){
		cout<<ch <<" is a digit."<<endl;
	}else{
		cout<<ch <<" is a special character."<<endl;
	}
}
int main(){
	char ch;
	while(1){
	cout<<"Enter any character:"<<endl;
	cin>>ch;
    checkCharacter(ch);
	}

}
