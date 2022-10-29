//Zakaria Kortam 10/23/2022
//Tabrizi

#include <cmath>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;


	int main() {
		double x[15];
		double y[15];
		double copy;
		
	ifstream input;
	input.open("inputfile.txt");
	for (int i=0;i<15;i++){
		input>>x[i];
		y[i] = x[i]; 
	}

	for (int i=0; i<15; i++){

		for (int j=i+1; j<15; j++) {
	
			if( x[j] < x[i]) {
				copy = x[i];
				x[i] = x[j];
				x[j] = copy;
			}              
		}
	}
	
	cout<<"The minimum is "<<x[0]<<" and the maximum is "<<x[14];
}
