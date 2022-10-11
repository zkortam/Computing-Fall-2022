

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
double exercise, score,maxscore, points, maxtotal=0, scoretotal=0,percent;

cout<<"\nWelcome to the Tabrizi Class Excercise Calculator"<<endl;;

cout<<"How many class exercises would you like to input: ";
cin>>exercise;
cout<<"\n"<<endl;
cout<<"What was the maximum score for exercise "<<exercise<<" : ";
cin>>maxscore;
cout<<"What was the score recieved for exercise "<<exercise<<": ";
cin>>score;

maxtotal = maxscore + maxtotal;
scoretotal = scoretotal + score;

do
{
cout<<"\n"<<endl;
exercise = exercise-1;
cout<<"What was the maximum score for exercise "<<exercise<<": ";
cin>>maxscore;
cout<<"What was the score recieved for exercise "<<exercise<<": ";
cin>>score;
maxtotal = maxscore + maxtotal;
scoretotal = scoretotal + score;
if (exercise <= 1)break;

}while (exercise >= 1);

percent = (scoretotal / maxtotal)*190;
cout<<"Your total is "<<scoretotal<<" out of "<<maxtotal<<", or "<<percent<<"%.";

return 0;
}
