#include<iostream>
using namespace std;
int main()
{
	//Array Practicle checking positive and negative number even odd and zero
	int var[15];
	int positive = 0;
	int negative = 0;
	int even =0;
	int odd =0;
	int zero = 0;
	
	for(int i = 0; i<15; i++)
	{
		cout<<"Enter Numbers: "<<endl;
		cin>>var[i];
		
		//let make condition for positive check
		if(var[i]>0)
		{
			positive++;
		}
		else if(var[i]<0)
		{
			negative++;
		}
		else
		{
			zero++;
		}
		if(var[i]%2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}

}
	cout<<"Total Positive Numbers: "<<positive<<endl;
	cout<<"Total Negative Numbers: "<<negative<<endl;
	cout<<"Total Zeros Numbers: "<<zero<<endl;
	cout<<"Total Even Numbers: "<<even<<endl;
	cout<<"Total Odd Numbers: "<<odd<<endl;
	
	return 0;
}
