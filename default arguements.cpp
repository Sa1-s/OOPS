#include<iostream>
#include <cstring>
using namespace std;

class domain 
{
    string email, fname, lname,pwd,policy, lang;
    public:
   domain(){}
   domain(string e, string f, string l, string p, string po, string ll="English")
   {
   	email=e;
   	fname=f;
   	lname=l;
   	pwd=p;
   	policy=po;
   	lang=ll;
   }
    void display()
	{
        cout << "\nYOU HAVE SUCCESSFULLY CREATED YOUR Z-LIBRARY ACCOUNT !!\n";
        cout << "Email: " << email << endl;
        cout << "Name: " << fname << " " << lname << endl;
        cout << "Preferred language: " << lang << endl;
    }
};
int main()
{
    cout << "WELCOME TO Z-LIBRARY\n";
    cout << "~~~~~~~~~~~~~~~~~~~~\n";
    string email, fname, lname,pwd, policy, lang;
            cout << "\nEnter Email ID: ";
            cin >> email;
            cout << "\nEnter First name: ";
            cin >> fname;
            cout << "\nEnter Last name: ";
            cin >> lname;
            cout << "\nEnter password: ";
            cin >> pwd;
            cout << "\nEnter Y/y to accept all policy and guidelines: ";
            cin >> policy;
            cout << "\nEnter preferred language or enter '1' for default language: ";
            domain A;
            cin >> lang;
            if (lang=="1")
			 {
                A=domain(email, fname, lname,pwd,policy);
                A.display();
            }        
		else
		 {
            A=domain(email, fname, lname,pwd,policy,lang);
            A.display();
    }
    return 0;
}
