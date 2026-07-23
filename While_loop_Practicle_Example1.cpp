//While loop Practice Example
#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	while( num<10)
	{
		if(num ==5)
		{
			num++;
			continue;
		}
		cout<<"The Value Is: "<<num<<endl;
		num++;
	}
	return 0;
}
