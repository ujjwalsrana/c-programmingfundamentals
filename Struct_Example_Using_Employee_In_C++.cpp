#include<iostream>
using namespace std;
struct employee{
	int sno;
	int empId;
	string empName;
	string empCity;
};

int main()
{
	struct employee emp;
	emp.sno=1;
	emp.empId=123;
	emp.empName ="Ujjwal Rana";
	emp.empCity = "Kathmandu";
	
	cout<<"S.N: "<<emp.sno<<endl;
	cout<<"Employee Id: "<<emp.empId<<endl;
	cout<<"Employee Full Name:"<<emp.empName<<endl;
	cout<<"Employee City or Address: "<<emp.empCity<<endl;
	
	
	
	return 0;
}
