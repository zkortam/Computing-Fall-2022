#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


class course {

public:
double size;
double cost;
string subject;	

	
};
course function(course myCourse);
int main()
{
	
	course myCourse = {0,0,""};
	myCourse = function(myCourse);
	cout<<"The size is "<<myCourse.size<<". The cost is "<<myCourse.cost<<". The subject is "<<myCourse.subject;



return 0;
}


course function(course myCourse){
	
	cout<<"Please state the course size: ";
	cin>>myCourse.size;
	cout<<"Please state the course cost: ";
	cin>>myCourse.cost;
	cout<<"Please state the course subject: ";
	cin>>myCourse.subject;
	
	return myCourse;
}