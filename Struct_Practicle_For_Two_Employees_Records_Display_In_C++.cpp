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
	cout<<"Enter the data for First Employee: "<<endl;
	cout<<"Enter SN Number: "<<endl;
	cin>>emp.sno;
	
	cout<<"Enter Employee ID: "<<endl;
	cin>>emp.empId;
	
	cout<<"Enter Full Name: "<<endl;
	cin>>emp.empName;
	
	cout<<"Enter Your City Address: "<<endl;
	cin>>emp.empCity;
	
	struct employee emptwo;
	cout<<"Enter the data for First Employee: "<<endl;
	cout<<"Enter SN Number: "<<endl;
	cin>>emptwo.sno;
	
	cout<<"Enter Employee ID: "<<endl;
	cin>>emptwo.empId;
	
	cout<<"Enter Full Name: "<<endl;
	cin>>emptwo.empName;
	
	cout<<"Enter Your City Address: "<<endl;
	cin>>emptwo.empCity;
	
	cout<<"The First Employee Name is:"<<emp.empName<<endl;
	cout<<"The Second Employee Name is: "<<emptwo.empName<<endl;
	
	
	return 0;
}
