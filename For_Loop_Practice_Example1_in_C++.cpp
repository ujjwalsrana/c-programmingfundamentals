//MORE PRACTICE RELATED TO FOR LOOP. LETS TRY TWO EXAMPLE FOR FOR LOOP FIRST
#include<iostream>
using namespace std;
int main()
{
// CHECK whether the number is prime or not	
	int var, num;
	bool is_prime = true;
	cout<<"Enter a Positive Number orInteger: ";
	cin>>num;
	
	if(num == 0 || num == 1)
		{
			is_prime = false;
		}
		
		for(int i=2; i<= num/2; ++i)
		{
			if(num % i ==0)	
			{
				is_prime = false;
				break;
			}
	if(is_prime)
	{
		cout<<" is a prime number";
	}
	else
	{
		cout<<" is not a prime number";
	}
	return 0;
}
}
