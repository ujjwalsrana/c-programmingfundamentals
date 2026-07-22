#include<iostream>
using namespace std;
int main()
{
	//nested if---> if you wanted to use multiple condition then you should use nested if
	int num;
	cout<<"Enter Any Number: "<<endl;
	cin>>num;
	
	//now lets use nested if
	
	if(num !=0)
	{
		if(num>0)
			{	
			cout<<"Your Number is Positive: "<<endl;
			
			}
		else
			{
			cout<<"Your Number is Negative: "<<endl;
			}
	}
		else
		{
			cout<<"Your Number is Zero: "<<endl;
		}
		
	return 0;
}
