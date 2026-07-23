/*function in c++
A function in C++ is a block of code that performs a specific task. Instead of writing the same code again and again, 
you write it once inside a function and call it whenever you need it. Functions make programs easier to read, reuse, 
and maintain.
*/
#include<iostream>
using namespace std;
// function syntax
/*
data type function-name(parameters)--> formal parameters 

{
return
}
*/
int sum(int a, int b)
{
	int add = a+b;
	return add;
}
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
