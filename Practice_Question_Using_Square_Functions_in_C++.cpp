#include<iostream>
#include<cmath> //Note: for mathematical function you need define this libraries
using namespace std;
int main()

{
	
//sqrt--> builtin function
	double num, squareRoot;
	cout<<"Enter Number: ";
	cin>>num;
	
	squareRoot= sqrt(num);
	cout<<"The Square root of "<<num<<" is: "<<squareRoot;
	return 0;
}


/*
The #include <cmath> header provides mathematical functions in C++. As a beginner, you only need to remember the most common ones.

Function	Purpose										Example	Output
sqrt(x)		Finds the square root						sqrt(25)	5
pow(x, y)	Raises a number to a power					pow(2,3)	8
abs(x)		Finds the absolute value					abs(-10)	10
ceil(x)		Rounds up									ceil(4.2)	5
floor(x)	Rounds down									floor(4.9)	4
round(x)	Rounds to the nearest whole number			round(4.6)	5
trunc(x)	Removes the decimal part					trunc(4.9)	4
sin(x)		Sine of an angle (in radians)				sin(0)		0
cos(x)		Cosine of an angle (in radians)				cos(0)		1
tan(x)		Tangent of an angle (in radians)			tan(0)		0
log(x)		Natural logarithm (base e)					log(1)		0
log10(x)	Base-10 logarithm							log10(100)	2
exp(x)		Calculates e								exp(1)		2.71828
fmod(x, y)	Finds the remainder of decimal division		fmod(7.5,2)	1.5
*/
