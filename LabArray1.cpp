#include <iostream>
#include <cmath>
#include <iomanip>
#include <FStream>
using namespace std;

double calculate(double x[], double e, int i);
int main()
{
	
	double x[10], y[10];
	int i;
	double e = 2.71;
	ofstream write;
	write.open("outputFileKortam.txt");
	write<<setw(25)<<"X"<<setw(22)<<"Y"<<endl;
	write<<setw(29)<<"=========="<<setw(23)<<"=========="<<endl;

	for (i=0; i<10; i++) {
	
		cout<<"Please state X value "<<i+1<<": ";
		cin>> x[i];
		if ( x[i] != 0) {
		y[i] = calculate (x,e,i);
		
		write<<setw(25)<<x[i]<<setw(26)<<y[i]<<endl;

	 } else {
			cout<<"X may not be 0, please try again: ";
			cin>> x[i];
			
		}

	}


return 0;
}

double calculate(double x[], double e, int i) {
double answer = 3*pow(e, 2*x[i]) + log ( 3 * x[i]);

return answer;
}
