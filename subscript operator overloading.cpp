#include <iostream>
using namespace std;
class Array
{
	private:
		int* arr;
		int size;
		public :
			Array(int s)
			{
				size =s;
				arr=new int[size];
			}
			
			~Array()
			{ delete[] arr;
			}
			int& operator[](int index)
			{
				if(index >=0 && index<size)
				{
					return arr[index]; // Return refernce for both assignment and access
				}
				else
				{
					cout << "Array index out of bound !" << endl;
					// If the index is out of bounds, return the first element (undefined behaviour)
					// You might want to handle this better in a real applicatoin
					return arr[0];
				}
			}
			void display()
			{
				cout << "Array elements: ";
				for(int i=0; i<size; i++)
				{
					cout << arr[i] << " ";
			}
			cout << endl;
}
};
int main()
{
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	
	Array A(size);
{
	// Assign values using the overload subscript operator
	for(int i=0; i<size; i++)
				{
					A[i]= i*10; // Example: Assigning multiples of 10
}
	cout << "Array elememts: ";
	A.display();
	
	//Testing array out of bounds
	cout << "Trying to access out of bound index: ";
	cout << A[size] << endl; //This should display the error message
}
	return 0;
}
