#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

	using namespace std;
	void last_Function(  vector<double> last, int & n, double & max, double & min,
		double & minBreakValue, double & maxBreakValue, vector<double> copy);
			void Print( vector<double> last, double max, double min,
		double minBreakValue, double maxBreakValue, vector<double> first, vector<double> middle);
	
	void Organize( vector<double>array, int n );
		int main(){
		
			ifstream input;
			ofstream output;
			double min=0;
			double max=0;
			double minBreakValue = 0;
			double maxBreakValue = 0;
		
			vector <double> first(10);
			vector <double> middle(10);
			vector <double> last(10);
			input.open("datafile.txt");
			int n=0;
			while(!input.eof()){
				
				if(n>0){
					first.push_back(0);
					middle.push_back(0);
					last.push_back(0);
				}
				input>>first[n];
				input>>middle[n];
				input>>last[n];
				n++;
			}
				vector <double> copy(n);
			for(int i=0; i<n; i++){
				copy[i] = last[i];
			}
			last_Function(last,n,max,min,minBreakValue,maxBreakValue,copy);
			Print(last,max,min,minBreakValue,maxBreakValue,first,middle);
		}
		
		void last_Function( vector<double> last, int & n, double & max, double & min,
		double & minBreakValue, double & maxBreakValue, vector<double> copy ) {
			cout<<last[1];
		Organize(last,n);
		min = last[0];
		max = last[(n-1)];
		
			for(int i=0; i<n;i++){
				if(copy[i] = min){
					minBreakValue=i;
					break;
				}
			}
			for(int i=0; i<n;i++){
				if(copy[i] = max){
					maxBreakValue=i;
					break;
				}
			}
			
		}
		
		
		void Organize( vector<double> array, int n) {
		
			double temp=0;
			for (int i=0; i<=n; i++){

				for (int j=i+1; j<=n; j++) {
	
					if( array[j] < array[i]) {
						temp = array[i];
						array[i] = array[j];
						array[j] = temp;
				}
			}
			
		}
	}
		
		
		void Print( vector<double> last, double max, double min,
		double minBreakValue, double maxBreakValue, vector<double> first, vector<double> middle){
			
			cout<<"The minimum was "<<min<<" and it happened after "<<first[minBreakValue]
			<<" first and "<<middle[minBreakValue]<<" middle"<<endl;
			cout<<"The maximum was "<<max<<" and it happened after "<<first[maxBreakValue]
			<<" first and "<<middle[maxBreakValue]<<" middle."<<endl;
			
		}
