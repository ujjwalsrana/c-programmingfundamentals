#include<iostream>
using namespace std;
int main()
{
	//Calculate Difference Using Pointers
	int* pt1;
	int* pt2;
	int num1, num2, diff;
	
	cout<<"Enter two value in number: "<<endl;
	cin>>num1;
	cin>>num2;
	
	pt1 = &num1;
	pt2 = &num2;
	
	diff = *pt1 - *pt2;
	cout<<"Difference in two number will be: " <<diff<<endl;
	
	return 0;
}
