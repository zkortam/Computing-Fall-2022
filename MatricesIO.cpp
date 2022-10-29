//Zakaria Kortam 10/23/2022
//Tabrizi

#include <cmath>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

	int main() {
		
	double a[16], b[16], c[16], d[16]; 
	ofstream output;
	ifstream input;
	input.open("datafile.txt");
	for (int i=0;i<15;i++){
		input>> a[i];
		input>> b[i];
	}
	for (int i=0;i<15;i++){
		
		double tempvala = a[i];
		double tempvalb = b[i];
		c[i] = tempvala + tempvalb;
		d[i] = pow (c[i], 2);
	}
	
	output.open("outputmatrix.txt");
	
	
	for(int j=0; j<4; j++){
		for (int i=0;i<4;i++){
		output<<d[i]<<" ";
	}
	output<<endl;
	}
	
		output<<endl;
			output<<endl;
				output<<endl;
		for(int j=0; j<4; j++){
		for (int i=0;i<4;i++){
		output<<c[i]<<" ";
	}
	output<<endl;
	}
}
