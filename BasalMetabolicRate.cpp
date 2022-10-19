//Zakaria Kortam Question One
// Tabrizi 9/19

#include <iostream>
#include <cmath>

using namespace std;
int main()
{

double weight, height, BMR, chocolatecal;
int age, gendernumber, d, activitylevel;
string gender;
char answer='Y';

cout<<"Welcome to the BMR Calculator. Please state your gender. (Male or Female): ";
cin>>gender;

if (gender =="Male" || gender == "male") gendernumber = 1;
if (gender =="Female" || gender == "female") gendernumber = 2;
if (gender == "M") gendernumber=1;
if (gender == "F") gendernumber=2;

cout<<" Please state your weight in pounds: ";
cin>>weight;
cout<<" Please state your height in inches: ";
cin>>height;
cout<<" Please state your age in years: ";
cin>>age;
cout<<" In terms of activity, which of the following are you? "<<endl;
cout<<"1. Sedentary "<<endl;
cout<<"2. Somewhat active (occasional exercise)"<<endl;
cout<<"3. Active (3-4 times a week)"<<endl;
cout<<"4. Highly active (every day)"<<endl;
cin>>activitylevel;

if (activitylevel == 1) d=1.2;
if (activitylevel == 2) d=1.3;
if (activitylevel == 3) d=1.4;
if (activitylevel == 4) d=1.5;

switch(gendernumber)
{
	
	case 1:
		
		BMR = (655+(4.3*weight)+(4.7*height)-(4.7*age))*(d);
		break;
		
		
	case 2:
		
	    BMR = (66+(6.3*weight)+(12.9*height)-(6.8*age))*(d);
	    break;
	
}

chocolatecal = BMR/230;

cout<<"Your Basal Metabolic Rate is "<<BMR<<" calories and it will take "<<chocolatecal<<" chocolate bars to meet it.";



return 0;
}
