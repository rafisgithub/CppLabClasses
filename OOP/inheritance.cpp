#include <iostream>
using namespace std;
class Human{
protected:
    string humanAge = "5.6 million";

public:
    void creativity(){
        cout << "We are creative.\n";
    }
    void conflict()
    {
        cout << "Sometimes we make conflict\n";
    }
    void communication()
    {
        cout << "We can communicate each other.\n";
    }
    void socialInteraction()
    {
        cout << "we maintain our social Interaction.\n";
    }
};
class Male : public Human{
public:
    void male(){
        cout << "We are male.\n";
        cout << "Our age is " << humanAge << endl;
    }
};

class Female : public Human{
public:
    void female()
    {
        cout << "We are female.\n";
        cout << "Our age is " << humanAge << endl;
    }
};
int main(){
    int passcode;
    cout << "Enter your passCode.\n";
    cin >> passcode;
    if (passcode == 1234)
    {
        Male obj1;
        obj1.male();
        obj1.creativity();
        obj1.communication();
        obj1.conflict();
        obj1.socialInteraction();
        cout << "\n\n\n";
        Female obj2;
        obj2.female();
        obj2.creativity();
        obj2.communication();
        obj2.conflict();
        obj2.socialInteraction();
    }

    return 0;
}
