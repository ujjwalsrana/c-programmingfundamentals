//TASK: Write a C++ program using nested for loops to display a pyramid pattern of stars based on the number of rows entered by the user.
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Number for Rows: ";
	cin>> num;
//nested loops	
	for(int i = 1; i<=num; i++)
	{
		//space
		for(int space = i; space<num ; space++)
		{
			cout<<" ";
		}
		for(int j =1; j<= (2*i -1); j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
