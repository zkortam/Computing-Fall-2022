#include <cmath>
#include <iomanip>
#include <iostream>
#include <stdlib.h>

using namespace std;

string Day(char daychar);

int main(){
char daychar;
string daystring;

cout<<"Please state the first letter of the day: ";
cin>>daychar;
daychar = toupper(daychar);

daystring = Day(daychar);
cout<<"Today is "<<daystring;

	return 0;

}




string Day(char daychar) {
	string daystring;
	char secondletter;
	char thirdletter;
	
	if (daychar == 'S' || daychar == 'T') {
		cout<<"Please state the second letter: ";
		cin>>secondletter; 
		secondletter = toupper(secondletter);
	}
	
	if (secondletter == 'U') {
		cout<<"Please state the third letter: ";
		cin>>thirdletter; 
		thirdletter = toupper(thirdletter);
		//Sunday and Tuesday both have U's as second letter
	}
	


switch(daychar){
	case 'M':
	daystring = "Monday";
	break;
		case 'W':
	daystring = "Wednesday";
	break;
		case 'F':
	daystring = "Friday";
	break;
}

switch(secondletter){
		case 'A':
	daystring = "Saturday";
	break;
		case 'H':
	daystring = "Thursday";
	break;
}

switch(thirdletter){
		case 'N':
	daystring = "Sunday";
	break;
		case 'E':
	daystring = "Tuesday";
	break;
}

return daystring;

}
