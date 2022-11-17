#include<iostream>
#include<string> 
using namespace std;
class Card{
	private:
		string title,author;
		int numberOfCopiesOnHand;
		public:
			void Store(string t,string a,int n){
				title=t;
				author=a;
				numberOfCopiesOnHand=n;
			}
			void Display(){
				cout<<"\n\n\t this is SU library card\n";
				cout<<"Title:"<<title<<endl;
				cout<<"Author Name:"<<author<<endl;
				cout<<"Number of copies on hand:"<<numberOfCopiesOnHand<<endl;
				
			}
};
int main(){
	Card obj;
	string title,author;
	int numberOfCopiesOnHand;
	cout<<"Enter title"<<endl;
	cin>>title;
	cout<<"Enter Author Name"<<endl;
	cin.ignore();
	getline(cin,author);
	cout<<"Enter Number of copies on hand:"<<endl;
	cin>>numberOfCopiesOnHand;
	obj.Store(title,author,numberOfCopiesOnHand);
	obj.Display();
	return 0;
}
