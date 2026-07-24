#include<iostream>
using namespace std;
int factorial(int num);


int main()
{
	//We will create Factorial Function using recursion
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
