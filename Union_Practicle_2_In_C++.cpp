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
	di.letter ='A';
	di.salary = 45.45;
	
	cout<<"Your SN is: "<<di.sno<<endl;
	cout<<"Your Letter is: "<<di.letter<<endl;
	cout<<"Your Salary is: "<<di.salary<<endl;
	return 0;
}

//Note: di.sno and di.letter wil return only memory garabage value and thats why it won't display exact output but for the last one iit display memory accordingly

// Therefore among di.sno, di.lettet and di.salary UNION ALWAYS WORKS ON THE LAST ONE for current
// situation di.salary is the last one so thats why union work for di.salary only
