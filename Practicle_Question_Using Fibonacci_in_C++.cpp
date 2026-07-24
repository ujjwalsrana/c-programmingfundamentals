#include<iostream>
using namespace std;

int fibonacci(int num)
{
	if((num==1) || (num==0))
	{
		return num;
	}
	else
	{
		return(fibonacci(num-1) + fibonacci(num-2));
	}
}
int main()
{
	//Recursion is a function tha call itself
	//fibanacci Series--> 0 1
	
	int num, i=0;
	cout<<"How many terms for fibonacci series: "<<endl;
	cin>>num;
	cout<<"Fibonacci Series for "<<num<<" is: "<<endl;
	
	while(i<num)
	{
		cout<<" "<<fibonacci(i);
		i++;
	}
	cout<<"\a";
	return 0;
	
	
}
