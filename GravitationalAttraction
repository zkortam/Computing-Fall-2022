#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>

using namespace std;

double calculation(double mass1, double mass2, double distance);
const double G = 6.673 * pow(10,-8);

int main() {
	
	double mass1,mass2,distance,answer;
	char resume;
	
	do {
	
	system("CLS");
	cout<<"Please state the first mass in KG: ";
	cin>>mass1;
	cout<<"Please state the second mass in KG: ";
	cin>>mass2;
	cout<<"Please state the distance between them: ";
	cin>>distance;
	
	answer = calculation(mass1,mass2,distance);
	cout<<"The gravitational attractive force is "<<answer;
	cout<<"Would you like to continue? (Y/N)";
	cin>>resume;
	resume = toupper(resume);
	
 } while (resume = 'Y'); 


	return 0;
}


double calculation(double mass1, double mass2, double distance) {
	double answer;
	 answer = G*((mass1 * mass2)/distance);
	
	return answer;
}
