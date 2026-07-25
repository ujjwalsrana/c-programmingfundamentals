#include<iostream>
using namespace std;
int main()
{
	//display largest and smallest number in an array
	int arr[] = {12, 4, 1, 34, 6, 8, -4, 45, 2, 76};
	int largest = arr[0];
	int smallest = arr[0];
	
	for(int i=0; i<10; i++)
	{
		if(arr[i]>largest)
		{
			largest = arr[i];
		}
		if(arr[i]<smallest)
		{
			smallest = arr[i];
		}
	}
	cout<<"The largest value is: "<<largest<<endl;
	cout<<"The smallest value is: "<<smallest<<endl;
	return 0;
}

/*

Imagine you have 10 toy blocks lined up in a row, and each block has a number written on it:

12, 4, 1, 34, 6, 8, -4, 45, 2, 76

Your job is to find which block has the biggest number and which has the smallest number. Let me show you exactly how the code does this, step by step!

?? The Analogy: "The Tallest and Shortest Friend"
======================================================
Think of the numbers as heights of 10 friends standing in a line.
The code uses a clever trick: it picks the first friend as a guess for both tallest AND shortest, then checks every other friend to see if they are taller or shorter.
?? 
Line-by-Line Explanation
============================
1. int arr[] = {12, 4, 1, 34, 6, 8, -4, 45, 2, 76};
This creates a box with 10 slots (called an array) and puts the numbers inside:

| Slot 0 | Slot 1 | Slot 2 | Slot 3 | Slot 4 | Slot 5 | Slot 6 | Slot 7 | Slot 8 | Slot 9 |
| ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ |
| 12     | 4      | 1      | 34     | 6      | 8      | -4     | 45     | 2      | 76     |

2. int largest = arr[0]; and int smallest = arr[0];
The code says: "My first guess is that the first number (12) is both the biggest AND the smallest."

largest = 12     ? My guess for biggest
smallest = 12    ? My guess for smallest

3. for(int i=0; i<10; i++)
This means: "Go through every slot from 0 to 9, one by one."

4. The Two if Checks
For each number, the code asks two questions:
Question 1: if(arr[i] > largest)
"Is this number BIGGER than my current biggest guess?"
If YES ? update largest to this new number!
If NO ? do nothing, keep the old guess.

Question 2: if(arr[i] < smallest)
"Is this number SMALLER than my current smallest guess?"
If YES ? update smallest to this new number!
If NO ? do nothing, keep the old guess.

Let's Walk Through It Together!

| Step  | Looking at | Value | Is it > `largest`?  | Is it < `smallest`? | Result                      |
| ----- | ---------- | ----- | ------------------- | ------------------- | --------------------------- |
| Start | —          | —     | —                   | —                   | `largest=12`, `smallest=12` |
| 1     | `arr[0]`   | 12    | 12 > 12? ? No       | 12 < 12? ? No       | No change                   |
| 2     | `arr[1]`   | 4     | 4 > 12? ? No        | 4 < 12? ? **Yes!**  | `smallest = 4`              |
| 3     | `arr[2]`   | 1     | 1 > 12? ? No        | 1 < 4? ? **Yes!**   | `smallest = 1`              |
| 4     | `arr[3]`   | 34    | 34 > 12? ? **Yes!** | 34 < 1? ? No        | `largest = 34`              |
| 5     | `arr[4]`   | 6     | 6 > 34? ? No        | 6 < 1? ? No         | No change                   |
| 6     | `arr[5]`   | 8     | 8 > 34? ? No        | 8 < 1? ? No         | No change                   |
| 7     | `arr[6]`   | -4    | -4 > 34? ? No       | -4 < 1? ? **Yes!**  | `smallest = -4`             |
| 8     | `arr[7]`   | 45    | 45 > 34? ? **Yes!** | 45 < -4? ? No       | `largest = 45`              |
| 9     | `arr[8]`   | 2     | 2 > 45? ? No        | 2 < -4? ? No        | No change                   |
| 10    | `arr[9]`   | 76    | 76 > 45? ? **Yes!** | 76 < -4? ? No       | `largest = 76`              |


Final Answer
After checking all 10 numbers:

The largest value is: 76
The smallest value is: -4

The Big Idea (In One Sentence)
Start by guessing the first number is both the biggest and smallest, then check every other number to see if it beats your guess!
It's just like playing a game where you keep track of the highest score and the lowest score as you go! 
*/
