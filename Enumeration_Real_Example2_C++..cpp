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
