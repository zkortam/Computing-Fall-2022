#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

	using namespace std;
	void Print(vector<string>first, vector<string>middle, vector<string>last, vector<string>fullName, int n );
		int main(){
		
			ifstream input;
			ofstream output;
		
			vector <string> first(1);
			vector <string> middle(1);
			vector <string> last(1);
			input.open("stringdatafile.txt");
			int n=0;
			while(!input.eof()){
				
				if(n>0){
					first.push_back("");
					middle.push_back("");
					last.push_back("");
				}
				input>>first[n];
				input>>middle[n];
				input>>last[n];
				n++;
			}
			vector <string> fullName(n);
			for(int i=0; i<n; i++){
				fullName[i] = first[i] +" "+ middle[i] +" "+ last[i];
			}
			Print(first,middle,last,fullName,n);
			
		}
		
	void Print(vector<string>first, vector<string>middle, vector<string>last, vector<string>fullName,int n ) {
		
		for(int i=0;i<n;i++){
		
		cout<<first[i]<<" + "<<middle[i]<<" + "<<last[i]<<" = "<<fullName[i]<<endl;
		
		}
		
		
	}
	
