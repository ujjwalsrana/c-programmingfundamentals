/*
Loops In C++
A loop is used for executing a block of statements repeteadly until a particular condition is statisfied.

TYPES OF LOOP in C++
====================
1) For Loop:
		Syntax:
		for (initialization; condition; update)
		{
				// body of-loop
		}
		
Note: for loop ? Use it when you know in advance how many times you want to repeat something.

Example: Print numbers from 1 to 10.		
		
2) While Loop:
		Syntax:
			while (condition)
			{
			
				// body of-loop
			}
Note: while loop ? Use it when you don't know how many times the loop will run, but you check the condition before each iteration.

Example: Keep asking for a password until the correct one is entered.
3)	Do-While-loop:
		Syntax:
		do
			{
				// body of-loop
			}
			while (coondition);
Note: do...while loop ? Use it when you want the code to run at least once, because the condition is checked after the first iteration.

Example: Show a menu once, then keep showing it until the user chooses "Exit."

Quick Memory Trick
====================
for = Known number of repetitions.
while = Unknown repetitions, check first.
do...while = Run once first, then check the condition.
*/

//LETS TRY A EXAMPLE FOR for-loop
/*
#include<iostream>
using namespace std;
int main()
{
// Print table of 2 using for loop
	cout<<"************ Table of 2 ************"<<endl;
	for (int i = 1; i<=10; i++)
	{
		cout<<"2 x "<<i<<" = "<<i*2<<endl;
	}
	return 0;
}
*/

//lets Try a example for while-loop
/* 
#include<iostream>
using namespace std;
int main()
{
	int var=0;
	while(var<10)
	{
		cout<<var;
		var++;
	}
	return 0;
}
*/

//Lets try example for do-while-loop
#include<iostream>
using namespace std;
int main()
{
	int var = 0;
	do {
		cout<<"Display Do While Loop Magic"<<endl;
		var++;
		}
		while(var<5);
	return 0;

}
