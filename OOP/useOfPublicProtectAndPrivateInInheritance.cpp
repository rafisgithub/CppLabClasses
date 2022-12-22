#include<iostream>
using namespace std;
class Base {
  public:
    int x=10;
  protected:
    int y=20;
  private:
    int z=30;
};
class PublicDerived: public Base {
	public:
		void explainPublicMode(){
			// x is public
            cout<<"I'm public,my value:"<<x<<endl;
            // y is protected
            cout<<"I'm protected,my value:"<<y<<endl;
            // z is not accessible from PublicDerived
            cout<<"I'm private,I'm not accessible.\n";
		}
};

class ProtectedDerived: protected Base {
		public:
		void explainProtectedMode(){
		// x is protected
        cout<<"I'm protected,my value:"<<x<<endl;
        // y is protected
        cout<<"I'm protected,my value:"<<y<<endl;
        // z is not accessible from ProtectedDerived
        cout<<"I'm private,I'm not accessible.\n";
	}
  
};

class PrivateDerived: private Base {
		public:
		void explainPrivateMode(){
		// x is private
        cout<<"I'm private,my value:"<<x<<endl;
        // y is private
        cout<<"I'm private,my value:"<<y<<endl;
        // z is not accessible from PrivateDerived
        cout<<"I'm private,I'm not accessible.\n";
	}
  
 
  
};
int main(){
	PublicDerived obj1;
	obj1.explainPublicMode();
	cout<<"\n\n\n";
	ProtectedDerived obj2;
	obj2.explainProtectedMode();
	cout<<"\n\n\n";
	PrivateDerived obj3;
	obj3.explainPrivateMode();
	return 0;
}
