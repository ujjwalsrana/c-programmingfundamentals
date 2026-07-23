//TASK: Take a positive integers and calculate its sum
#include<iostream>
using namespace std;
int main()
{
	int num;
	int sum = 0;
	cout<<"Enter a Number: ";
	cin>>num;
	
	while(num>=0)
	{
		sum+=num; // sum = sum + number
		cout<<"Enter a Number: ";
		cin>>num;
	}
	cout<<"\nSum Is "<<sum<<endl;
	return 0;
}
