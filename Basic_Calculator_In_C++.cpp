#include <iostream>
using namespace std;
int main()
{
//Basic Calculator
	cout<<"Enter + to Perform Addition Operation"<<endl;
	cout<<"Enter - to Perform Substraction Operation"<<endl;
	cout<<"Enter * to Perform Multiply Operation"<<endl;
	cout<<"Enter / to Perform Divison Operation"<<endl;
	cout<<"Enter % to Perform Percent Operation"<<endl;
	
	int firstNumber, secondNumber, result;
	char operation;
	cout<<"Enter your first number"<<endl;
	cin>>firstNumber;
	cout<<"Enter your second number"<<endl;
	cin>>secondNumber;
	cout<<"Enter your operation symbol (+ - * / %) any one symbol for calculation"<<endl;
	cin>>operation;

	if(operation=='+')
	{
		result = firstNumber + secondNumber;
		cout<<"Addition of "<<firstNumber<<" and "<<secondNumber<<" is:"<<result<<endl;
	}
		if(operation=='-')
	{
		result = firstNumber - secondNumber;
		cout<<"Minus of "<<firstNumber<<" and "<<secondNumber<<" is: "<<result<<endl;
	}
		if(operation=='*')
	{
		result = firstNumber * secondNumber;
		cout<<"Multiplication of "<<firstNumber<<" and "<<secondNumber<<" is: "<<result<<endl;
	}
		if(operation=='/')
	{
		result = firstNumber / secondNumber;
		cout<<"Division of "<<firstNumber<<" and "<<secondNumber<<" is: "<<result<<endl;
	}
		if(operation=='%')
	{
		result = firstNumber % secondNumber;
		cout<<"Percentag of "<<firstNumber<<" and "<<secondNumber<<" is: "<<result<<endl;
	}
	else
	{
		cout<<"You have entered invalid number or symbol "<<operation<<" Therefore your total will be: "<<result<<endl;
	}
	return 0;
	
}
