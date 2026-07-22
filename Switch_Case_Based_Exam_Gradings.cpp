#include<iostream>
using namespace std;
int main()
{
	//switch use case for grading
	int marks, result;
	cout<<"Enter your mark number for grading ";
	cin>>marks;
	/*this converts his converts: 
	90-100 ? 9 or 10
	80-89 ? 8
	70-79 ? 7
	60-69 ? 6
	50-59 ? 5
	40-49 ? 4
	0-39 ? 0,1,2,3 
	Note: The following operators cannot be used in a case label of a standard C++ switch statement.
	> < >= <= == != && || !
	
	Note: Switch cannot contain expressions like:

	case marks > 90:        // ?
	case marks == 50:       // ?
	case marks >= 80:       // ?
	case marks <= 100:      // ?
	case marks != 0:        // ?
	case marks > 80 && marks < 90:   // ?
	case marks == 10 || marks == 20: // ?
	*/
	
	switch(result=marks/10)
	{
		case 10:
		case 9:
			cout<<"Your Grade is A+ " <<endl;
			break;
		
		case 8:
			cout<<"Your Grade is A " <<endl;
			break;
		
		case 7:
			cout<<"Your Grade is B+ " <<endl;
			break;
	
		case 6:
		cout<<"Your Grade is C" <<endl;
		break;
		
		case 5:
		cout<<"Your Grade is D" <<endl;
		break;
		
		case 4:
		case 3:
		case 2:
		case 1:
		cout<<"Your are Failed" <<endl;
		break;
		
		default:
			cout<<"Invalid Marks. Enter Valid marks for the grading" <<endl;
				
	}
	
	return 0;
}
