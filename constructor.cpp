#include<iostream>
#include <cstring>
using namespace std;

class domain 
{
    string email, fname, lname,pwd,policy, lang;
    public:
   domain(){}
   domain(string email, string fname, string lname, string pwd, string policy, string lang="English")
   {
   	this->email=email;
   	this->fname=fname;
   	this->lname=lname;
   	this->pwd=pwd;
   	this->policy=policy;
   	this->lang=lang;
   }
   domain(domain &A)
   {
   	email=A.email;
    fname=A.fname;
   	lname=A.lname;
   	pwd=A.pwd;
   	policy=A.policy;
   	lang=A.lang;
   	A.lang="English";
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
                A=domain (email, fname, lname,pwd,policy,lang);
                domain two(A);
                A.display();
            }        
		else
		 {
            A=domain(email, fname, lname,pwd,policy,lang);
            A.display();
            
    }
    return 0;
}
