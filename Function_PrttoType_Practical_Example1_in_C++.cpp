/*function in c++
A function in C++ is a block of code that performs a specific task. Instead of writing the same code again and again, 
you write it once inside a function and call it whenever you need it. Functions make programs easier to read, reuse, 
and maintain.
*/
#include<iostream>
using namespace std;
// function Prototype

/*
A function prototype tells the compiler a function’s name, return type, and parameters before the function is fully written. 
For example, int add(int a, int b); tells C++ that a function named add will take two integers and return an integer.
{
return
}

// function prototype
//type function-name (parameter)
*/

//Note: inst sum(int a, b) syntax is not accepted in function. you must write/define datatype int before b.
// int sum(int, int) syntax is accepted / allowed in function
int sum(int a, int b);  
int main()
{
	int num1, num2;
	cout<<"Enter first Number: ";
	cin>>num1;
	cout<<"Entter Second Number: ";
	cin>>num2;
	cout<<"The Sum is: " <<sum(num1, num2); // actual parameterers

	return 0;
}
//function definition which define what task it is performing	
	int sum(int a, int b)
{
	int add = a+b;
	return add;
}
