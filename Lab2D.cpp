//Zakaria Kortam
//Tabrizi 10/17

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

	void calculator(double x[][4], double & revenue, double revenuear[],  double & total);
	int main()
	{
		double x[2][4], revenue, total, revenuear[4];
		ifstream input; ofstream output; 
		input.open("input.txt");
		for (int i=0; i<2; i++){
			for (int j=0; j<4; j++){
				input>>x[i][j];
			}
		}
		calculator(x,revenue,revenuear,total);
		output.open("output.txt");
		output<<setw(10)<<"Pump"<<setw(10)<<"Valve"<<setw(10)<<"Motor"<<setw(10)<<"Bulb"<<endl;
	
		for (int i=0; i<2; i++){
			output<<setw(10)<<x[i][0]<<setw(10)<<x[i][1]<<setw(10)<<x[i][2]<<setw(10)<<x[i][3]<<endl;
		}
		output<<"\n\n"<<endl; 
		output<<setw(10)<<"Revenue"<<setw(10)<<"Revenue"<<setw(10)<<"Revenue"<<setw(10)<<"Revenue"<<endl;
		output<<setw(10)<<"======="<<setw(10)<<"======="<<setw(10)<<"======="<<setw(10)<<"======="<<endl;
		for (int j=0;j<4;j++){
	 		output<<setw(10);
	 		output<<revenuear[j];		
		}
		output<<endl; 
		output<<"\n\n"<<endl; 
		output<<setw(10)<<"The total is: "<<total;
	return 0;
	}

	void calculator(double x[][4], double & revenue, double revenuear[], double & total) {
	 	for (int j=0;j<4;j++){
	 		revenuear[j] = x[0][j] * x[1][j];
		}
		for (int i=0;i<4;i++){
	 		total = revenuear[i]+ total;
		}
	}

