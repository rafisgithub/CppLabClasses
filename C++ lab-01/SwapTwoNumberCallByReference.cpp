#include<iostream>

using namespace std;
void swapping(int *px,int *py);
int main(){
    int x,y;
    cout<<"Enter two number:";
    cin>>x>>y;
    cout<<"Before swapping:\n"<<x<<" "<<y<<endl;
    swapping(&x,&y);
    cout<<"After swapping:\n"<<x<<" "<<y<<endl;
    return 0;
}
void swapping(int *px,int *py){
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
	
}
