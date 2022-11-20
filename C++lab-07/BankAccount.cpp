#include<iostream>
using namespace std;
class Bank{
	private:
		string nameOfTheDepositor;
		int accountNumber,withdrawalAmount,depositAmount;
		long int Balance=0;
		public:
			void choche(){
				again:
				int choice;
				cout<<"1)To Deposit an Amount.\n";
				cout<<"2)Checking Balance and withdraw an amount.\n";
				cout<<"3)Check name and current balance.\n";
				cout<<"4)Exit\n";
				cout<<"Enter you choice:"<<endl;
				cin>>choice;
				switch(choice){
					case 1:
						Deposit();
						break;
					case 2:
						CheckBAndWithdraw();
						break;
					case 3:
						CheckNameAndBalance();
						break;
					case 4:
						Exist1();
						break;
					default:
						cout<<"Please choose currect option.\n";
				}
				goto again;
			}
			void Deposit(){
				cout<<"Enter your name:\n";
				cin.ignore();
				getline(cin,nameOfTheDepositor);
				// cin>>nameOfTheDepositor;
				cout<<"Enter Account number:\n";
				cin>>accountNumber;
				cout<<"Deposit Amount.\n";
				cin>>depositAmount;
				Balance+=depositAmount;
				cout<<"Your deposit amount added successfully.\n";
			}
			void CheckBAndWithdraw(){
				cout<<"current balance ="<<Balance<<endl;
				cout<<"Enter your withdrawal amount:\n";
				cin>>withdrawalAmount;
				cout<<"With draw successfull\n";
				Balance-=withdrawalAmount;
				cout<<"Current balance:"<<Balance<<endl;
			}
			void CheckNameAndBalance(){
				cout<<"Depositor name:"<<nameOfTheDepositor<<endl;
				cout<<"You balance is:"<<Balance<<endl;
				
			}
			int Exist1(){
				return 0;
			}
};
int main(){
	Bank obj;
	obj.choche();
	obj.Deposit();
	obj.CheckNameAndBalance();
	obj.CheckNameAndBalance();
	return 0;
}
