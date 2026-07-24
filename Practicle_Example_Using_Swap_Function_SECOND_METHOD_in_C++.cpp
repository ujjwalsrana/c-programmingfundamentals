#include<iostream>
using namespace std;

void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	cout<<"After Swapping:"<<endl;
	cout<<"Value 1 is: "<<a<<endl;
	cout<<"Value 2 is: "<<b<<endl;
	return;
}


int main()

{
	
	int value1, value2;
	cout<<"Enter first Number: ";
	cin>>value1;
	cout<<"Enter Secon Number: ";
	cin>>value2;
	
	cout<<"Value Before Swappin: "<<endl;
	cout<<"Value 1 is: "<<value1<<endl;
	cout<<"Value 2 is: "<<value2<<endl;
	
	swap(value1, value2);
	return 0;
}



