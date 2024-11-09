#include<iostream>
#include <cstring>
using namespace std;

class domain 
{
    string email, fname, lname, pwd, policy, lang;
    static int domainCount;   // Static member to count number of domain objects
    public:
    domain()
	{
		domainCount++;  // Increment count whenever a new object is created
	}

    domain(string email, string fname, string lname, string pwd, string policy, string lang="English")
    {
        this->email = email;  
        this->fname = fname;  
        this->lname = lname;  
        this->pwd = pwd;      
        this->policy = policy;
        this->lang = lang;
        domainCount++;
    }

    domain(domain &A)
    {
        email = A.email;
        fname = A.fname;
        lname = A.lname;
        pwd = A.pwd;
        policy = A.policy;
        lang = A.lang;
        domainCount++;
    }

    void display()
    {
        cout << "\nYOU HAVE SUCCESSFULLY CREATED YOUR Z-LIBRARY ACCOUNT !!\n";
        cout << "Email: " << email << endl;
        cout << "Name: " << fname << " " << lname << endl;
        cout << "Preferred language: " << lang << endl;
        cout << "Password: "<< pwd <<endl;
    }
    
	static void showDomainCount()
    {
        cout << "\nTotal Z-Library domains used: " << domainCount << endl;
    }
    
    void modify(domain &A)
    {
        cout << "\nNo modifications made to language. Keeping default English...\n";
        A.lang = "English";
    }
    
    string& getLanguage()
    {
        return lang;
    }
    friend void resetPassword(domain &A, string newPwd);
};

// Static member initialization
int domain::domainCount = 0;

// Friend function definition
void resetPassword(domain &A, string newPwd)
{
    A.pwd = newPwd;// Directly accessing the private member 'pwd'
}

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
    // Show the total number of domain objects created (static function)
    domain::showDomainCount();
    
	string newPassword;
    cout << "\nRe-Enter your password: ";
    cin >> newPassword;
    resetPassword(A, newPassword);  // Call friend function to reset password
    if(newPassword==pwd)
	{
	A.display();
	cout << "\nPassword has been verified!\n";
    }
	else
	cout<<"Re-Check your password !";
	
    return 0;
}
