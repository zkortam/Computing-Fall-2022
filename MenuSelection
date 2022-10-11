#include <iostream>


using namespace std;
int main()
{
double price, Bigmac, Fries, Milkshake, Pop, balance, DM=0;
int choice, numchoice = 0;
char answer,ronald;
string stop;

cout<<"\nWelcome to Mcdonalds. Please look at the menu for your choices:"<<endl;
	
cout<<"\n1. Big Mac"<<endl;
cout<<"\n2. Fries "<<endl;
cout<<"\n3. Milkshake"<<endl;
cout<<"\n4. Pop"<<endl;
cout<<"\n5. Dihydrogen Monoxide"<<endl;
cout<<"\n "<<endl;

do {

numchoice = numchoice + 1;
cout<<"\nSelect choice number "<< numchoice<<" : ";
cin>>choice;
switch(choice)
{
case 1:
price = 5.50;
break;
case 2:
price = 3.50;
break;
case 3:
price = 4.10;
break;
case 4:
price = 1.50;
break;
case 5:
price = 0.10;
break;
default:
return 0;
}
balance = price + balance;
cout<<"\nYour current balance is:  "<<balance<<" USD"<<endl;
cout<<"\nWould you like to continue (y/n) ---> ";
cin>>answer;
answer = toupper(answer);
}while ( answer == 'Y' );
cout<<"Your total for this order is: "<<balance<<endl;
cout<<"\nWould you like to donate to the Ronald Mcdonald Foundation? (y/n) "<<endl;
cin>>ronald;
ronald = toupper(ronald);
if (ronald == 'N') cout<<"\nYou don't have a choice. We're taking 5 dollars away for Ronald Mcdonald.";
balance = balance + 5;
cout<<"\nYour new balance is: "<<balance<<" USD.";

return 0;
}
