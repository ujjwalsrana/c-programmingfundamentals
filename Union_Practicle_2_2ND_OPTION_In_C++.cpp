#include<iostream>
using namespace std;
union dataInfo{
	int sno;
	char letter;
	float salary;
};
int main()
{
	union dataInfo di;
	di.sno =1;
	cout<<"Your SN is: "<<di.sno<<endl;
	di.letter ='A';
	cout<<"Your Letter is: "<<di.letter<<endl;
	di.salary = 45.45;
	cout<<"Your Salary is: "<<di.salary<<endl;
	
	return 0;
}

/*
//Note: di.sno and di.letter wil return only memory garabage value 
//and thats why it won't display exact output but for the last one iit display memory accordingly

// Therefore among di.sno, di.lettet and di.salary UNION ALWAYS WORKS ON THE LAST ONE for MEMORY 
// situation di.salary is the last one so thats why union work for di.salary only
// OTHER TWO WHICH IS SN AND LETTER WON'T GET MEMORY

Memory timeline:
====================
Memory contains 1 (as int) ? reading as int shows 1 ?

Memory overwritten with 'A' (65) ? reading as char shows 'A' ?

Memory overwritten with 45.45 ? reading as float shows 45.45 ?
*/
