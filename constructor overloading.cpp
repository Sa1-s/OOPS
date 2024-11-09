#include<iostream>
using namespace std;

class Time
{
	int hours;
	int minutes;
	public:
		Time(){}
		Time(int hours, int minutes)
		{
			this->hours=hours;
			this->minutes=minutes;
		}
		void display()
		{
			cout<<"\nTime= "<<hours<<":"<<minutes;
		}
		void update()
		{
			int hours, minutes;
			cout<<"\nEnter hours and then minutes: ";
			cin>>hours>>minutes;
			this->hours=hours;
			this->minutes=minutes;
		}
		friend void modify(Time &t);
		friend Time sum(Time t1,Time t2); // returns the time
	};
		int main()
	{
		Time t1;
		t1=Time(3,45);
		
//		t1.display();
//		t1.update();
//		modify(t1);
//		t1.display();

        Time t2(4,30);
        t1.display();
        t2.display(); // when t1 and t2 is not changed it is called call by value
        
        Time t3;
        t3=sum(t1,t2);
        t3.display();
        
		return 0;
	}
	void modify(Time &t)
	{
		t.hours=t.hours+1;
		t.minutes=t.minutes+1;
	}
	Time sum(Time t1, Time t2)
	{
		Time t3;
		t3.minutes=t1.minutes+t2.minutes;
		t3.hours=t3.minutes/60;
		t3.minutes=t3.minutes%60;
		t3.hours=t3.hours+t1.hours+t2.hours;
		return t3;
	}
