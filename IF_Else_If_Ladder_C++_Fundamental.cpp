#include<iostream>
using namespace std;
int main()
{
	//if else - if ladder
	int num;
	cout<<"Enter any one number between 1 to 12 for months name display"<<endl;
	cin>>num;
	if(num==1)
	{
		cout<<"The number that you entered "<<num<<" is for January"<<endl;
	}
	else if(num==2)
	{
		cout<<"The number that you entered "<<num<<" is for February"<<endl;
	}
	else if(num==3)
	{
		cout<<"The number that you entered "<<num<<" is for March"<<endl;
	}
	else if(num==4)
	{
		cout<<"The number that you entered "<<num<<" is for April"<<endl;
	}
	else if(num==5)
	{
		cout<<"The number that you entered "<<num<<" is for May"<<endl;
	}
	else if(num==6)
	{
		cout<<"The number that you entered "<<num<<" is for June"<<endl;
	}
	else if(num==7)
	{
		cout<<"The number that you entered "<<num<<" is for July"<<endl;
	}
	else if(num==8)
	{
		cout<<"The number that you entered "<<num<<" is for August"<<endl;
	}
	else if(num==9)
	{
		cout<<"The number that you entered "<<num<<" is for September"<<endl;
	}
	else if(num==10)
	{
		cout<<"The number that you entered "<<num<<" is for October"<<endl;
	}
	else if(num==11)
	{
		cout<<"The number that you entered "<<num<<" is for November"<<endl;
	}
	else if(num==12)
	{
		cout<<"The number that you entered "<<num<<" is for December"<<endl;
	}
	else
	{
		cout<<"Sorry You have Entered Invalid Number: "<<num<<" The number "<<num<<" that you entered does not falls in 1-12 months " <<endl;
		 
	}
	return 0;
}
