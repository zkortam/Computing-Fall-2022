#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

double standard( vector<double> v, double average);
int main()
{
ifstream input;
vector <double> v(1);

input.open("inputfile.txt");
int i = 0;
double average, total=0;

while (!input.eof()){

input>>v[i];
v.push_back(0);
total = v[i] + total;
i++;
}
average = total/v.size();
double STD = standard(v,average);
cout<<"The average is "<<average<<endl;
cout<<"The standard deviation is"<<STD;


return 0;
}

double standard( vector<double> v, double average) {
	
	double numerator = 0;
	for(int i=0; i<v.size(); i++){
		
	numerator = numerator + pow((v[i] - average), 2.0);
	}
	
	double STD = numerator / (v.size()-1); 
	
	return STD;
}

