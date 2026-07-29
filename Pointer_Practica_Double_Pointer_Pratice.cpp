#include<iostream>
using namespace std;
int main()
{
	//USING DOUBLE POINTER
	int var;
	int* ptr;
	int** dptr;
	var = 10;
	cout<<"Addres for Var Variable"<<&var<<endl;
	cout<<"Value of var is: "<<var<<endl;
	
	ptr = &var;
	
	cout<<"Addres for Var Variable"<<ptr<<endl;
	cout<<"Value of var is: "<<ptr<<endl;
	
	dptr  = &ptr;
	cout<<"Addres of Double Variable is:"<<dptr<<endl;
	cout<<"Value of double pointer is: "<<*dptr<<endl;
	cout<<"Double Pointer Value is: "<<**dptr<<endl;
	
	
	return 0;
}
