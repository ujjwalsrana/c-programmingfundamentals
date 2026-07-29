#include<iostream>
using namespace std;
int main()
{
	//Changing Value using pointer
	int var = 2;
	int* ptr;
	ptr = &var;
	cout<<"Var = " <<var<<endl;
	cout<<"ptr = "<<*ptr<<endl;
	cout<<"After Changing Value: "<<endl;
	
	var=5;
	cout<<"var = "<<var<<endl;
	cout<<"ptr = "<<*ptr<<endl;
	
	cout<<"After changing value using pointer varialble: "<<endl;
	*ptr = 10;
	cout<<"var = "<<var<<endl;
	cout<<"ptr = "<<*ptr<<endl;
	return 0;
}
