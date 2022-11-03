//Zakaria Kortam 10/31/2022
//Tabrizi

#include <cmath>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

	int main() {
		
	ifstream input;
	ofstream output;
	
	int i=0, n;
	input.open("inputstringfile.txt");
	string dummy;
	while(input>>dummy){
	i++;
	}
	n=i;
	input.close();
	input.clear();
	input.open("inputstringfile.txt");
	
	string *data;
	data = new string [n];
	
	string *dataold, hold;
	dataold = new string [n];
	

	for(int i=0; i<n; i++){
		input>>data[i];
		dataold[i] = data[i];
	}
	
	for (int i=0; i<n; i++){

		for (int j=i+1; j<n; j++) {
	
			if( data[j][0] < data[i][0]) {
				hold = data[i];
				data[i] = data[j];
				data[j] = hold;
			}              
		}
	}
		
		for(int k=0; k<n; k++){
			
			cout<<dataold[k]<<"         "<<data[k]<<endl;
			
		}
		
	}
	


