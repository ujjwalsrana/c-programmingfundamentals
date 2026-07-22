#include<iostream>
using namespace std;
int main()
{
	//Switch Case Statement : This allows us to execute a block of code among many alternatives
	/*
	switch(variable_name)
	{
	case constant :
	// write code to execute
	break;
	.
	.
	.
	default:
	//code execute
	Ntoe: Inside switch you can are allowed to use only int and char data types
	}
	*/
	int day;
	cout<<"Enter any one number between 1 to 7 for week day Name display: ";
	cin>>day;
	switch(day)	
	{
		case 1:
			cout<<"Monday";
			break;
		
		case 2:
			cout<<"Tuesday";
			break;
			
		case 3:
			cout<<"Wednesday";
			break;
		
		case 4:
			cout<<"Thursday";
			break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturdday";
			break;
		case 7:
			cout<<"Sunday";
			break;
		default:
		cout<<"Invalid Number";
	}
	
	return 0;
}
