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
	cout<<"Type your operation symbol (+ - * / %) any one symbol for calculation"<<endl;
	cin>>operation;

	switch(operation)	
	{
		case '+':
			result = firstNumber + secondNumber;
			cout<<"Your Result Value is: " <<result<<endl;
			break;
		
		case '-':
			result = firstNumber - secondNumber;
			cout<<"Your Result Value is: " <<result<<endl;
			break;
			
		case '*':
			result = firstNumber * secondNumber;
			cout<<"Your Result Value is: " <<result<<endl;
			break;
		
		case '/':
			result = firstNumber / secondNumber;
			cout<<"Your Result Value is: " <<result<<endl;
			break;
		case '%':
			result = firstNumber % secondNumber;
			cout<<"Your Result Value is: " <<result<<endl;
			break;
		default:
		cout<<"You have entered Invalid Symbol "<<operation<<" Therefore Result Value will be: "<<result<<"";
	}
	
	return 0;
	
}
