#include<iostream>
using namespace std;
int factorial(int num);


int main()
{
	//We will create Factorial Function using recursion. 
	// For Example 21-> 2*1
	// 0 and 1 factorial = 1
	// factorial for 51 will be 51=5*4*3*2*1 and total will be 120
	int num;
	cout<<"Enter any positive integer: ";
	cin>>num;
	
	cout<<"The Factorial of "<<num<<" is "<<factorial(num);
	
	return 0;
}

int factorial(int num)
{
	if(num>1)
	{
		return num*factorial(num-1);
		
	}
	else 
	return 1;
}
