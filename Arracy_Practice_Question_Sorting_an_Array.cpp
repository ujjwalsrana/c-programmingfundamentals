#include<iostream>
using namespace std;
int main()
{
	//sorting an array
	int temp, arr[20], size;
	cout<<"Enter Size (Max. 20) of an Array: "<<endl;
	cin>>size;
	
	cout<<"Enter Array Elements: "<<endl;
	for(int i=0; i<size; i++)
	{
		
		cin>>arr[i];
	
	}
	
	cout<<"Store Data Before Sorting: "<<endl;
	for(int i=0; i<size; i++)
	{
		
		cout<<arr[i];
	
	}
	
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	
	cout<<"Sorted Array: "<<endl;
		for(int i=0; i<size; i++)
	{
		
		cout<<arr[i]<<endl;
	
	}
	return 0;
}

/*
What Does This Program Do?
Imagine you have a row of toy blocks with numbers on them, all mixed up. This program helps you arrange them from smallest to biggest — like lining up your friends from shortest to tallest!
?? Let's Read It Like a Story

Step 1: Getting Ready
cpp
#include<iostream>
using namespace std;
int main()
This is like opening your backpack and getting out your pencil and paper. It tells the computer we're ready to write a C++ program.

Step 2: Making Space for Toys
cpp
int temp, arr[20], size;
arr[20] = A box with 20 empty slots to hold your number blocks.
size = How many blocks you actually want to use (you don't have to use all 20!).
temp = A temporary holding spot — like an extra hand when swapping two blocks.

Step 3: Asking "How Many Blocks?"
cpp
cout<<"Enter Size (Max. 20) of an Array: "<<endl;
cin>>size;
The computer asks: "Hey, how many number blocks do you have?"
You type a number (like 5).

Step 4: Putting Numbers Into the Box
cpp
cout<<"Enter Array Elements: "<<endl;
for(int i=0; i<size; i++)
{
    cin>>arr[i];
}
The computer asks for each number, one by one, and puts them into the box.
Example: If you type 5, 2, 8, 1, 9, your box looks like:
plain
[5] [2] [8] [1] [9]

Step 5: Showing the Messy Box
cpp
cout<<"Store Data Before Sorting: "<<endl;
for(int i=0; i<size; i++)
{
    cout<<arr[i];
}
The computer shows you the numbers before sorting — just so you remember what the mess looked like! ??

Step 6: The Magic Sorting Trick! ?
cpp
for(int i=0; i<size; i++)
{
    for(int j=0; j<size-i-1; j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]= temp;
        }
    }
}
Note: This is called Bubble Sort — because big numbers "bubble up" to the end like bubbles in soda! ??

How it works (imagine 5 kids lining up by height):
Kid 1 compares with Kid 2. If Kid 1 is taller, they swap places.
Kid 2 compares with Kid 3. If Kid 2 is taller, they swap places.
Keep going until the tallest kid reaches the end.
Then do it all over again for the remaining kids!
Example with [5, 2, 8, 1, 9]:
Table
Round		What Happens										Result
1st pass	5?2, then 5?8 (no), then 8?1, then 8?9 (no)			[2, 5, 1, 8, 9]
2nd pass	2?5 (no), 5?1, 5?8 (no)								[2, 1, 5, 8, 9]
3rd pass	2?1													[1, 2, 5, 8, 9]
4th pass	Nothing to swap! Done! ??							[1, 2, 5, 8, 9]

The temp variable is like saying: "Hold my juice box while I switch seats with you!"

Step 7: Showing the Neat Box
cpp
cout<<"Sorted Array: "<<endl;
for(int i=0; i<size; i++)
{
    cout<<arr[i]<<endl;
}
Now the computer proudly shows: "Ta-da! Here are your numbers in perfect order!" ??

Step 8: The End
cpp
return 0;
The program says "Goodbye!" and finishes.
?? One Tiny Bug to Fix!
Look at this line:
cpp
cout<<"Sorted Array: "<endl;
There's a typo! It should be << (two less-than signs), not < (one). Fix it to:
cpp
cout<<"Sorted Array: "<<endl;

Summary for Kids
=========================
Table
Code						Kid Language
arr[20]						A box with 20 slots
for loop					"Do this X times"
if(arr[j]>arr[j+1])			"Is this number bigger than the next one?"
temp						A helper hand for swapping
Bubble 						Sort	Big bubbles float to the top!

Fun Activity Idea
==================
Draw 5 boxes on paper, put random numbers in them, and act out the bubble sort with your friends! Compare heights, swap places if needed, and watch the tallest person "bubble" to the end! ??
Want me to make a visual animation or interactive widget to show how bubble sort works step-by-step? ??
High demand. Switched to K2.6 Instant for speed. Upgrade to use K2.6 Thinking.

*/
