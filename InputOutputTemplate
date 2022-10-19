//Zakaria Kortam 
// A.H. Tabrizi October 5, 2022

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <FStream>
using namespace std;

void calculator();
int main()
{

	calculator();


return 0;
}

void calculator()
{
	double x,y;
	ofstream write;
	ifstream read;
	
	write.open("input.txt");
	cout<<"===== Please state 10 values for x ===== \n";
	
	for(int i=1;i<=10;i++)
	{
		cout<<"X value "<<i<<": ";
		cin>>x;
		if (x==0){
            i--;
            cout<<"Invalid. X may not be 0. Please try again. \n";
        }
		if (x != 0)write<<x<<endl;
	}
	write.close();
	read.open("input.txt");
	write.open("output.txt");
	for(int i=1;i<=10;i++)
	{
		read>>x;
		y=3.0 * log10(2.0 * pow(x,3.0));
		write<<"When X is "<<x<<", Y is "<<y<<endl;
	}
	read.close();
	write.close();
}
