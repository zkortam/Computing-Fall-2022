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
    
    for (int i = 0; i < 16; i++) {
        input >> a[i];
    }
    
    for (int i = 0; i < 16; i++) {
        input>> b[i];
    }
    
    for (int i = 0; i < 16; i++) {
        c[i] = a[i] + b[i];
        d[i] = pow (c[i], 2);
    }
    
    output.open("outputmatrix.txt");


    int n = 4;
    int i = 0;
    for (int j = 0; j < 4; j++) {
        for (int k = 0; k < 4; k++) {
            output << d[i] << " ";
            i++;
        }
        output << endl;
        n = n + 4;
    }
    
    // blank lines for readability
    output<<endl;
    output<<endl;
    output<<endl;
        
    // reset counters
    n = 4;
    i = 0;
    for (int j = 0; j < 4; j++) {
        for (int k = 0; k < 4; k++) {
            output << c[i] << " ";
            i++;
        }
        output << endl;
        n = n + 4;
    }
}
