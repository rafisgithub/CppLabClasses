#include<iostream>
#define size 3
using namespace std;
class Person{
	private:
		string name,address,bloodGroup;
		int identificationNum;
		long int dateOfbirth[size];
		public:
			void Contain(string n,string a,string bg,int idn,long int db[]){
				name=n;
				address=a;
				bloodGroup=bg;
				identificationNum=idn;
				for(int i=0;i<size;i++){
					dateOfbirth[i]=db[i];
				}
			}
			void Display(){
				cout<<"\t\t\t|........................................|\n";
	            cout<<"\t\t\t|                                        |\n";
	            cout<<"\t\t\t|             Register                   |\n";
	            cout<<"\t\t\t|                                        |\n";
	            cout<<"\t\t\t|........................................|\n";
				cout<<"\t\t\t\t\tName       :"<<name<<endl;
				cout<<"\t\t\t\t\tAddrress   :"<<address<<endl;
				cout<<"\t\t\t\t\tBloodGroup :"<<bloodGroup<<endl;
				cout<<"\t\t\t\t\tIdentificationNum:"<<identificationNum<<endl;
				cout<<"\t\t\t\t\tdateOfbirth:";
				for(int i=0;i<size;i++){
					cout<<dateOfbirth[i]<<".";
				}
			}
};
int main(){
	Person obj;
	    string name,address,bloodGroup;
		int identificationNum,i;
		long int dateOfbirth[size];
		cout<<"Enter your name:\n"<<name;
		cin>>name;
		cout<<"Enter your Address:\n"<<address;
		cin>>address;
		cout<<"Enter your blood Group:\n"<<bloodGroup;
		cin>>bloodGroup;
		cout<<"Enter your identificationNum:\n"<<identificationNum;
		cin>>identificationNum;
		cout<<"Enter your date of birth:\n";
		for(i=0;i<size;i++){
			cin>>dateOfbirth[i];
		}
		obj.Contain(name,address,bloodGroup,identificationNum,dateOfbirth);
		obj.Display();
	return 0;
}
