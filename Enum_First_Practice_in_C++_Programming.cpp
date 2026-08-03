#include<iostream>
using namespace std;
enum week {
	Sunday,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
};
int main()
{
	enum week today;
	today = Wednesday;
	cout<<"Today date is: "<<today+1;
	return 0;
}
