#include<iostream>
using namespace std;
class MathematicalOperation{
	private:
		int n,arr[100],md,mdp,v;//md=minimum distance and mdp min dis position 
		public:
			MathematicalOperation(){
				cout<<"Enter element number:\n";
				cin>>n;
				cout<<"Enter "<<n<<" Elements\n";
				for(int i=0;i<n;i++){
					cin>>arr[i];
				}
				if(arr[0]==100){
					mdp=0;
					md=0;
//					cout<<arr[0]<<"is the cloest of 100 and distance =0\n";
				}else if(arr[0]<100){
					md=100-arr[0];
				}else{
					md=arr[0]-100;
				}
				for(int i=1;i<n;i++){
					v=100-arr[i];
					if(v<0){
						v=v*(-1);
					}
					if(v<=md){
						md=v;
						mdp=i;
					}
				}
					
			}
			~MathematicalOperation(){
				cout<<"Closest number ="<<arr[mdp]<<" and "<<"Distance from 100 ="<<md;
			}
};
int main(){
	MathematicalOperation obj;
	return 0;
}
