#include<iostream>
#include <cstring>
using namespace std;

class domain 
{
    string email, fname, lname, pwd, policy, lang;
    public:
    domain(){}

    domain(string email, string fname, string lname, string pwd, string policy, string lang="English")
    {
        this->email = email;  
        this->fname = fname;  
        this->lname = lname;  
        this->pwd = pwd;      
        this->policy = policy;
        this->lang = lang;
    }

    domain(domain &A)
    {
        email = A.email;
        fname = A.fname;
        lname = A.lname;
        pwd = A.pwd;
        policy = A.policy;
        lang = A.lang;
    }

    void display()
    {
        cout << "\nYOU HAVE SUCCESSFULLY CREATED YOUR Z-LIBRARY ACCOUNT !!\n";
        cout << "Email: " << email << endl;
        cout << "Name: " << fname << " " << lname << endl;
        cout << "Preferred language: " << lang << endl;
        cout << "Password: " << pwd << endl;
    }

    void modify(domain &A)
    {
        cout << "\nNo modifications made to language. Keeping default English...\n";
        A.lang = "English";
    }

    void modify(string new_pwd)
    {
        cout << "\nPassword is being updated...\n";
        pwd = new_pwd;
    }

    string& getLanguage()
    {
        return lang;
    }
};

int main()
{
    cout << "WELCOME TO Z-LIBRARY\n";
    cout << "~~~~~~~~~~~~~~~~~~~~\n";

    string email, fname, lname, pwd, policy, lang;

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
    cout << "\nEnter preferred language or enter '1' for default language (English): ";
    cin >> lang;

    domain A;

    if (lang == "1")
    {
        A = domain(email, fname, lname, pwd, policy);
        domain two(A);
        two.modify(A);
        A.display();
    }        
    else
    {
        A = domain(email, fname, lname, pwd, policy, lang);
        string &language = A.getLanguage();
        cout << "\nChanging language to user preferred language...\n";
        language = lang;
        A.display();
    }
    
    char c;
    cout<<"Enter Y/y to change your password: ";
    cin>>c;
    if(c=='y'||c=='Y')
    {
    string new_password;
    cout << "\nEnter new password to update: ";
    cin >> new_password;
    A.modify(new_password);
	A.display();
    }
    else
   {cout<< "The same password is retained.";}
    return 0;
}
