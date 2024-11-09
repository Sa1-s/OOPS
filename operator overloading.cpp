#include <iostream>
using namespace std;

class INT
{
	
	public:
		int x;
		INT(){}
		INT (int x)
		{
			this->x=x;
		}
		void display()
		{
			cout<<endl<<x;
			}
		INT friend operator+(INT X, INT Y);
        INT friend operator+(INT X, int y);
        INT friend operator+(int x, INT Y);
        void friend operator++(INT &X);
        void friend operator--(INT &X);
        void friend operator++(INT &X, int y);
        void friend operator--(INT &X, int y);
};
        INT operator+(INT X, INT Y)
		{
			INT temp;
			temp.x=X.x + Y.x;
			return temp;
		}
		INT operator-(INT X, INT Y)
		{
			INT temp;
			temp.x=X.x - Y.x;
			return temp;
		}
		INT operator+(INT X, int y )
		{
			INT temp;
			temp.x=X.x + y;
			return temp;
		}
		INT operator+(int x, INT Y )
		{
			INT temp;
			temp.x=x + Y.x;
			return temp;
		}
		void operator++(INT &x)
        {
 	        x=x+1;
        }
        void operator--(INT &x)
        {
 	        x=x-1;
        }
        void operator++(INT &X, int y)
        {
        	X.x=X.x+1; // post increment operator overloading
		}
		void operator--(INT &X, int y)
        {
        	X.x=X.x-1; // post decrement operator overloading
		}
int main()
 {
 	INT X(20), Y(10), Z;
 	Z=X+Y;
 	Z.display();
 	Z=6+Y;
 	Z.display();
 	Z=X+5;
 	Z.display();
 	Z=X-Y;
 	Z.display();
 	++Z;
 	Z.display();
 	--Z;
 	Z.display();
 	Z++;
 	Z.display();
 	Z--;
 	Z.display();
 	return 0;
 }
