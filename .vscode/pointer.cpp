// C++ program to demonstrate the dereferencing and 
// assignment of null pointer to another value. 

#include <iostream> 
using namespace std; 

int main() 
{ 
	int* ptr = nullptr; 

	// Checking if the pointer is null before dereferencing 
	if (ptr == nullptr) { 
		cout << "Pointer is currently null." << endl; 
	} 
	else { 
		cout << "Pointer is not null." << endl; 
	} 

	// *ptr = 10; (to avoid runtime error) 

	// Assigning a valid memory address to the pointer 
	int value = 5; 
	ptr = &value; 

	// Checking if the pointer is null after assigning a 
	
	if (ptr == nullptr) { 
		cout<<"Pointer is currently null." << endl; 
	} 
	else { 
		cout << "Pointer is not null." << endl; 
		cout << "Value at the memory location pointed to "
				"by the pointer: "
			<< *ptr << endl; 
	} 

	return 0; 
}
