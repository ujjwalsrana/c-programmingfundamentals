/*
Structures and Unions in C++
STRUCTURE (struct)
What is a Structure?
A structure is a container that holds different types of data together about one thing, like a student's record with name, age, and marks.

Simple Analogy:

A school file that contains a student's name, class, and grades all in one place

Instead of keeping them separate, you bundle them together

Real Example:

cpp
#include <iostream>
using namespace std;

struct Student {
    string name;    // Different data types
    int age;        // all stored together
    float marks;
};

int main() {
    Student s1;  // Create a student variable
    
    s1.name = "Rahul";
    s1.age = 15;
    s1.marks = 89.5;
    
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;
    
    return 0;
}
Key Points:

All members (name, age, marks) have separate memory

Can access all members at the same time

Size = sum of all members (plus some padding)

UNION (union)
What is a Union?
A union is like a structure, but all members share the same memory space — only one member can be used at a time.

Simple Analogy:

A multi-purpose room that can be a classroom, library, or lab — but only ONE at a time

You can't use it as all three simultaneously

Real Example:

cpp
#include <iostream>
using namespace std;

union Data {
    int number;      // All share the same
    float decimal;   // memory location
    char letter;     // (4 bytes total)
};

int main() {
    Data d1;
    
    d1.number = 65;         // Store integer
    cout << "Number: " << d1.number << endl;
    
    d1.letter = 'A';        // Now it stores character
    cout << "Letter: " << d1.letter << endl;
    cout << "Number now: " << d1.number; // Wrong! (garbage)
    
    return 0;
}
Key Points:

All members share the same memory space

Only ONE member holds valid data at a time

Size = size of the largest member

Saves memory when you only need one type at a time

Quick Comparison
Feature			Structure (struct)									Union (union)
====================================================================================
Memory			All members get separate space						All members share one space
Size			Sum of all members									Size of largest member
Usage			Use all members together							Use only ONE member at a time
When to use		Student record, employee details					Saving memory, different data types at different times

Remember: Use struct when you need everything together. Use union when you need ONE thing at a time to save memory!

*/

#include <iostream>
using namespace std;

struct Student {
    string name;    // Different data types
    int age;        // all stored together
    float marks;
};

int main() {
    Student s1;  // Create a student variable
    
    s1.name = "Rahul";
    s1.age = 15;
    s1.marks = 89.5;
    
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;
    
    return 0;
}


