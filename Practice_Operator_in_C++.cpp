#include<iostream>
using namespace std;
int main()
{
	int value1, value2;
	//Assignment Operator
	value1 = 4;
	value2 = 2;
	
	//Increament and Decrement Operators
	
	//Pre Increament Operator ++ and Pre Decrement Operator --
	cout<<++value1<<endl;
	cout<<--value1<<endl;
	
	//Post Increament Operator ++
	cout<<value1++<<endl;
	cout<<value1<<endl;
	
	// Post Decrement Operator --
	cout<<value1--<<endl;
	cout<<value1<<endl;
	
	//Arithmatic Binary Operators
	cout<<"Sum is> "<<value1+value2<<endl;
	
	
	cout<<"Sum is> "<<value1+value2<<endl;
	cout<<"Sub is> "<<value1-value2<<endl;
	cout<<"Multiply is> "<<value1*value2<<endl;
	cout<<"Divide is> "<<value1/value2<<endl;
	cout<<"Reminder is> "<<value1%value2<<endl;
	
	//Relational Operator
	cout<<(value1>value2)<<endl;
	cout<<(value1<value2)<<endl;
	cout<<(value1>=value2)<<endl;
	cout<<(value1<=value2)<<endl;
	cout<<(value1==value2)<<endl;
	cout<<(value1!=value2)<<endl;
	
	//Lets Try Logical Operator
	cout<<((value1>value2) && (value2<value1))<<endl;
	cout<<((value1<value2) || (value2<value1))<<endl;
	cout<<(!(value1>value2));
	
	//ternary operator
	string output;
	output = (value1>value2) ? "Yes" : "No";
	cout<<output<<endl;
	
	//shorthand
	cout<<"+= shorthand is : "<<(value1+=value2)<<endl; //value1 4 and Value2= 2-> vlaue1+=value2 ->4+2 -> Value1 = 6.
	cout<<"-= shorthand is : "<<(value1-=value2)<<endl; // 6-2 value1=4
	cout<<"*= shorthand is : "<<(value1*=value2)<<endl; // 4*2 value1=8
	cout<<"/= shorthand is : "<<(value1/=value2)<<endl; // 8/2 value1=4
	cout<<"%= shorthand is : "<<(value1%=value2)<<endl; //4 % 2 value1=0 
	
	
	
	return 0;
}
