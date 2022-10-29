//Zakaria Kortam 10/23/2022
//Tabrizi

#include <cmath>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;
	bool isNumber (double [], double number, double & brokenval);

	int main() {
		
	double x[15];
	double brokenval = 0;
	ifstream input;
	input.open("datafile.txt");
	for (int i=0;i<15;i++){
		input>>x[i];
	}
	double number;
	cout<<"Please state a number: ";
	cin>>number;
	bool isTrue = isNumber(x,number, brokenval);
	if (isTrue) {
		
		cout<<brokenval<<" was within the array"<<endl;
	}

}

	bool isNumber (double x[], double number, double & brokenval){
		
		bool isTrue = false;
		
		for (int i=0; i<15; i++){
			
			if( number == x[i]) {
				isTrue = true; 
				brokenval = x[i];
				break;
			}
			
			
		}
		
		return isTrue;
	}
