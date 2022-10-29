#include <cmath>
#include <iomanip>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

int choice;
double number;

cout<<"Please state your number --> ";
cin>>number;
cout<<"Which of the following would you like to do?"<<endl;
cout<<"1.Round up your number."<<endl;
cout<<"2.Round down your number."<<endl;
cout<<"3.Show your number in absolute value."<<endl;
cin>>choice;


switch(choice){
	case 1: 
    number = ceil(number);
	cout<<number;

	break;
	
	case 2:
    number = floor(number);
	cout<<number;

	break;
		
	case 3:
    number = abs(number);
	cout<<number;

	break;
	
	default:
		cout<<"invalid response"<<endl;
	
	
}
	return 0;
}
