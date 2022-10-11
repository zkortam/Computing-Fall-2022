#include <cmath>
#include <iomanip>
#include <iostream>
#include <stdlib.h>

using namespace std;

double Area(double side);
double Perimeter(double side);

int main(){
double side;
double area, perimeter;	
cout<<"Please state one side length: ";
cin>>side;
area = Area(side);
perimeter = Perimeter(side);

cout<<"The Area is "<< area<<endl;
cout<<"The Perimeter is "<< perimeter<<endl;

	return 0;
}


double Area(double side) {
double area;

area = 1.0/4.0 * (pow(side,2.0)) * sqrt(5.0 * (5.0+2.0*(sqrt(5.0))));

return area;
}

double Perimeter (double side){
double perimeter = 5*side;

return perimeter;
	
}
