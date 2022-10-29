#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;
double roots ( double a, double b, double c);

int main()
{

double a,b,c, ansone, anstwo;
char answer='Y';

do {
system("CLS");
cout<<"Using the following formula: ax^2 + bx + c = 0"<<endl;
cout<<"Please state your A value: ";
cin>>a;
cout<<"Please state your B value: ";
cin>>b;
cout<<"Please state your C value: ";
cin>>c;

roots(a,b,c);

cout<<"\nWould you like to continue (y/n) ---> ";
cin>>answer;
answer = toupper(answer);

}while (answer =='Y');

return 0;
}


double roots ( double a, double b, double c) {
	
	double ansone, anstwo;

	
ansone = ((-b)+ sqrt(pow(b,2.0)-(4.0*a*c)))/(2.0*a)   ;
anstwo =  ((-b)- sqrt(pow(b,2.0)-(4.0*a*c)))/(2.0*a)  ;

cout<<"Your two roots are: "<<ansone<<", "<<anstwo;
	
	
}
