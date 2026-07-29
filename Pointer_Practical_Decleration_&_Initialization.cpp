/*
What is a Pointer?
A pointer is a special variable that stores the memory address of another variable instead of storing a value directly.

Simple Analogy:

Your house has an address (where it is located)

A pointer is like writing that address on a piece of paper

Instead of carrying the house, you carry the paper with the address

#include <iostream>
using namespace std;

int main() {
    int age = 15;        // Normal variable storing value 15
    int *ptr = &age;     // Pointer storing address of age
    
    cout << "Age: " << age << endl;           // Shows: 15
    cout << "Address of age: " << &age << endl;  // Shows memory address
    cout << "Pointer value: " << ptr << endl;    // Shows same address
    cout << "Value at pointer: " << *ptr << endl; // Shows: 15 (using * to get value)
    
    return 0;
}

Key Points:
==================
& = Address operator (gets the address of a variable)

* = Dereference operator (gets the value at that address)

Pointers are like arrows pointing to where data is stored in memory

Why use pointers?
====================
To pass large data efficiently to functions

To create dynamic arrays

To build data structures like linked lists

To directly access and modify memory

*/

#include <iostream>
using namespace std;

int main() 
{
	int var = 5;
	
	//DECLARATION + INITIALIZATION OF POINTER
	int* p = &var;
	cout<<"The Value of Var Varialbe is: "<<var<<endl;
	
	cout<<"The Address of Var Variable is "<<&var<<endl;
	
	cout<<"The Address of Var Variable is "<<p<<endl;
	
	cout<<"The Value of Pointer is "<<*p<<endl;
    
    return 0;
}


