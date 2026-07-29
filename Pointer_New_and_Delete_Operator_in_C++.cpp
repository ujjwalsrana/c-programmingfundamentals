/*
What is Dynamic Memory Allocation?
It's a way to create variables while your program is running (at runtime) instead of deciding everything before the program starts.

Simple Analogy:

Static = You decide before a party that you need exactly 10 chairs (fixed)

Dynamic = You wait to see how many friends come, then bring chairs as needed (flexible)

REAL EXAMPLE
============

#include <iostream>
using namespace std;

int main() {
    int totalStudents;
    
    cout << "How many students? ";
    cin >> totalStudents;  // User decides at runtime!
    
    // Create array of exact size needed (dynamic!)
    int *scores = new int[totalStudents];
    
    // Store marks
    for(int i = 0; i < totalStudents; i++) {
        cout << "Enter marks for student " << i+1 << ": ";
        cin >> scores[i];
    }
    
    // Display marks
    cout << "\nMarks: ";
    for(int i = 0; i < totalStudents; i++) {
        cout << scores[i] << " ";
    }
    
    // IMPORTANT: Free memory when done!
    delete[] scores;
    
    return 0;
}

Key Points:

new = Allocates (creates) memory at runtime

delete = Frees (releases) memory when no longer needed

Memory comes from HEAP (big storage area), not stack (small storage area)

Why use dynamic allocation?

When you don't know the size beforehand

To save memory by creating only what's needed

To create large arrays that won't fit in stack memory

To make programs more flexible

Important Rule: Always delete what you new to prevent memory leaks (forgetting to free memory)

*/

#include<iostream>
using namespace std;
int main()
{
	int size;
	int* ptr;
	cout<<"Enter Number of Values You Want to store in an array: "<<endl;
	cin>>size;
	
	ptr = new int[size];
	cout<<"Enter the values: "<<endl;
	
	for(int i=0; i<size; i++)
	{
		cin>>ptr[i];
	}
	cout<<"Values in the array are: "<<endl;
	for(int i=0; i<size;i++)
	{
		cout<<ptr[i]<<endl;
	}
	
	return 0;
}
