/*
Enumeration (enum) in C++ (For School Children)
What is an Enumeration?
An enumeration is a way to give names to numbers so your code becomes easier to read and understand. It creates a new data type with a fixed set of possible values.

Simple Analogy:

Instead of saying "Day 1, Day 2, Day 3..."

You say "Monday, Tuesday, Wednesday..." — much clearer!

Like giving nicknames to numbers

Real Example:

cpp
#include <iostream>
using namespace std;

// Create an enum for days of the week
enum Weekday {
    Monday,     // 0 (by default)
    Tuesday,    // 1
    Wednesday,  // 2
    Thursday,   // 3
    Friday,     // 4
    Saturday,   // 5
    Sunday      // 6
};

int main() {
    Weekday today = Wednesday;  // Create variable
    
    cout << "Today is day number: " << today << endl;  // Shows: 2
    
    // Check which day it is
    if(today == Wednesday) {
        cout << "It's mid-week!" << endl;
    }
    
    // Using enum in a loop
    for(Weekday day = Monday; day <= Friday; day = (Weekday)(day + 1)) {
        cout << "School day! " << endl;
    }
    
    return 0;
}
Another Example (with custom values):

cpp
#include <iostream>
using namespace std;

enum Grade {
    A = 90,    // Assign specific values
    B = 80,
    C = 70,
    D = 60,
    F = 0
};

int main() {
    int marks = 85;
    Grade studentGrade;
    
    if(marks >= A)
        studentGrade = A;
    else if(marks >= B)
        studentGrade = B;
    else if(marks >= C)
        studentGrade = C;
    else
        studentGrade = F;
    
    cout << "Your grade value: " << studentGrade << endl;  // Shows: 80
    
    return 0;
}
Key Points:

Feature	Explanation
Default values	Start from 0, then 1, 2, 3...
Custom values	You can assign any numbers you want
Readability	Monday is clearer than 0
Safety	Only allows values you defined
Uses	Days, months, colors, status, directions, etc.
Common Uses:

cpp
enum Color { Red, Green, Blue };
enum Status { Pending, Approved, Rejected };
enum Direction { North, South, East, West };
enum Season { Spring, Summer, Autumn, Winter };
Why use enum?

? Makes code easier to understand

? Prevents mistakes (can't type wrong values)

? Makes programs self-documenting

? Groups related constants together

Remember: Enum = Enumerated list of named values. It turns meaningless numbers into meaningful names!

*/

#include <iostream>
using namespace std;

// Create an enum for days of the week
enum Weekday {
    Monday,     // 0 (by default)
    Tuesday,    // 1
    Wednesday,  // 2
    Thursday,   // 3
    Friday,     // 4
    Saturday,   // 5
    Sunday      // 6
};

int main() {
    Weekday today = Wednesday;  // Create variable
    
    cout << "Today is day number: " << today << endl;  // Shows: 2
    
    // Check which day it is
    if(today == Wednesday) {
        cout << "It's mid-week!" << endl;
    }
    
    // Using enum in a loop
    for(Weekday day = Monday; day <= Friday; day = (Weekday)(day + 1)) {
        cout << "School day! " << endl;
    }
    
    return 0;
}


