//Write a c++ program to implement classes and objects.
#include<iostream>
#include <cstring>
using namespace std;

class domain
{
	char a;
	char email[];
	char fname[];
	char lname[];
	char pwd[];
	char policy;
	public:
	     int readval()
		{
			cout<<"WELCOME TO Z-LIBRARY\n";
			cout<<"~~~~~~~~~~~~~~~~~~~~\n";
			cout<<"Are you a new user ?\nIf yes type Y/y: ";
			cin>>a;
			if(a=='y' || a=='Y')
			{
			cout<<"\nEnter Email ID: \n";
			cin>>email;
			cout<<"\nEnter First name: \n";
			cin>>fname;
			cout<<"\nEnter Last name: \n";
			cin>>lname;
			cout<<"\nEnter password: \n";
			cin>>pwd;
			cout<<"\nEnter Y/y to accept all policy and guidelines: \n";
			cin>>policy;
		    }
		    else
		    cout<<"GOODBYE";
		}
		void display()
		{
            int t;
			t=fns();
			if(t==1)
			cout<<"\nYOU HAVE SUCCESSFULLY CREATED YOUR Z-LIBRARY ACCOUNT !!";
			else
			cout<<"\nPLEASE RECHECK THE INFORMATION ENTERED";
		}
		int fns()
		{
			if (policy=='Y' || policy=='y')
			return 1;
			else
			return 0;
		}
	};
		main()
		{
			domain A;
			A.readval();
			A.fns();
			A.display();
		}
