
	#include <iostream> 
	#include <iomanip> 
	#include <cmath>
	#include <fstream>
	   
	// Zakaria M. Kortam 
	// December 10, 2022
	// Final Project - A.H. Tabrizi 
	// ENGR 100 - Fall Semester 
	


    using namespace std;
    	ofstream output;
    	
    class Material{
			
			protected: 
			
			string name;
			long long temp[10][10][600];
		    double dt, dx, dy, initial;
		    int tx, ty, tt;
		    
		    double a;
		    
		     double s1;//left
		     double s2;//right
		     double s3;//top
		     double s4;//bottom
		    
			public:
			string filename;
			
			
				/*Constructors/Accessors/Mutators*/
						
				Material(){
					name = "Material";
					s1=0;
					s2=0;
					s3=0;
					s4=0;
					dt=0;
					dx=0;
					dy=0;
					tt=0;
					tx=0;
					ty=0;
					a=0;
					initial=0;
				}
				
				Material(string name, double s1,double s2,double s3,double s4,double dt,double dx,double dy,int tt,int tx,int ty,double a, double initial,string fileName ){
					this->name = name;
					this->s1 = s1;
					this->s2 = s2;
					this->s3=s3;
					this->s4=s4;
					this->dt=dt;
					this->dx=dx;
					this->dy=dy;
					this->tt=tt;
					this->tx=tx;
					this->ty=ty;
					this->a=a;
					this->initial=initial;
					this->filename = fileName;
				}
				
				void setSides(double s1, double s2, double s3, double s4){
					this->s1=s1;
					this->s2=s2;
					this->s3=s3;
					this->s4=s4;
				}
				
				void setA(double a){
					this->a=a;
				}
				
				void setDT(double dt){
					this->dt=dt;
				}
				
				void setDY(double dy){
					this->dy=dy;
				}
				
				void setDX(double dx){
					this->dx=dx;
				}
				
				void setTT(double tt){
					this->dt=dt;
				}
				
				void setTY(double ty){
					this->ty=ty;
				}
				
				void setTX(double tx){
					this->dx=dx;
				}
				
				void setInitial(double initial){
					this->initial=initial;
				}
				
				void setName(string name){
					this->name=name;
				}
			
				void setFileName(string filename){
					this->filename = filename;
				}
				
				double getDT(){
					return dt;
				}
				
				double getDY(){
					return dy;
				}
				
				double getDX(){
					return dx;
				}
				
				double getTT(){
					return tt;
				}
				
				double getTY(){
					return ty;
				}
				
				double getTX(){
					return tx;
				}
				
				double getA(){
					return a;
				}
				
				string getName(){
					return name;
				}
				

				void Initialization(){
				
					
		      		for (int row = 0; row < ty; row++) {
		            	for (int col = 0; col < tx; col++) {
		               		 temp[row][col][0] = initial;
		            	}
		        	}
		   			 
				    for (int time = 0; time < tt; time++) {
				        for (int row = 0; row < ty; row++) {
				            temp[row][0][time] = s1;
				            temp[row][tx-1][time] = s2;
				        }
				
				        for (int col = 0; col < tx; col++) {
				            temp[0][col][time] = s3;
				            temp[ty-1][col][time] = s4;
				        }
				    }
				}
				void InitialOutput( ){
					
					for (int row = 0; row < ty; row++) {
				        for (int col = 0; col < tx; col++) {
				            output << temp[row][col][0];
				            output << "   ";
				        }
				      	 output<<endl;
				    }
				    output << endl;
					
				}		
				void calculations( ){
				
				
					cout<<setw(7);
					    for (int time = 1; time < tt; time++) {
					        for (int row = 1; row < ty-1; row++) {
					            for (int col = 1; col < tx-1; col++) {
					            	//Formula Components
					                double segment1 = (temp[row+1][col][time-1] - (2 * temp[row][col][time-1]) +temp[row-1][col][time-1]) / pow(dx, 2);
					                double segment2 = (temp[row][col + 1][time-1] - (2 * temp[row][col][time-1]) + temp[row][col - 1][time-1])/ pow(dy, 2);
					                
									//Formula Assembly
					                temp[row][col][time] = dt * a * (segment1 + segment2) + temp[row][col][time-1];
					                output<<setprecision(4)<<temp[row][col][time];
					            	output<<setw(7);
					            }
					            output<<endl;
					        }
					        output<<endl;
					        output<<endl;
					        output<<endl;
					    }
					  
				}
				
						
	
		};
		Material introduction();
		
		
		int main() {
			Material item = introduction();
			output.open(item.filename);
			
			
			
			item.Initialization();
			item.InitialOutput();
			item.calculations();  
			//cout<<item.getTT();
			system("Pause");

		}
		
		Material introduction( ){
			Material item;
			string name;
			double dt, dx, dy, initial;
		    int tx, ty, tt;
		    double a;
		    double s1;//left
		    double s2;//right
		    double s3;//top
		    double s4;//bottom
		    int DoS=0;
		    int RoA=0;
		    string filename;
		     
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
			cout<<"<<          Transient Heat Conduction Experiment [THCE]        <<"<<endl;
			cout<<"<<          Developed by Zakaria Kortam - ENGR 50              <<"<<endl;
			cout<<"<<          Dr. Abdollah Tabrizi | 12/10/2022                  <<"<<endl;
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
			cout<<"<<  Material Creation  <<"<<endl;
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
			cout<<endl;
			cout<<"Please enter your material's name (No Spaces): "; 
			cin>>name;
			cout<<"Please enter the temperature (Left) : "; 
			cin>>s1;
			cout<<"Please enter the temperature (Right) : "; 
			cin>>s2;
			cout<<"Please enter the temperature (Top) : "; 
			cin>>s3;
			cout<<"Please enter the temperature (Bottom) : "; 
			cin>>s4;
			cout<<"Please enter the initial temperature across the plane: "; 
			cin>>initial;
			cout<<"Please enter dT (Change in time): "; 
			cin>>dt;
			cout<<"Please enter dX (horizontal distance between 2 intervals): "; 
			cin>>dx;
			cout<<"Please enter dY (vertical distance between 2 intervals): "; 
			cin>>dy;
			cout<<"Please enter the total number of points in time [1-600]: "; 
			cin>>tt;
				if(tt>600 || tt<1){
					tt=600;
				}
			cout<<"Please enter the total number of horizontal points [3-10]: "; 
			cin>>tx;
				if(tx>100 || tx<3){
					tx=10;
				}
			cout<<"Please enter the total number of vertical points [3-10]: "; 
			cin>>ty;
				if(ty>10 || ty<3){
					ty=10;
				}
			cout<<endl;
			cout<<"Value of Alpha:"<<endl; 
			cout<<endl;
			if(DoS != 1 && DoS != 2)
			cout<<"Would you like to input alpha in"<<endl<<"(1)decimal form"<<endl<<"(2)scientific notation:"<<endl<<endl<<"User input: ";
			cin>>DoS; 
			switch(DoS){
				case 1: 
					cout<<"Please state the value of Alpha: ";
					cin>>a; 
					break;
				case 2: 
					cout<<"Please state the coefficient: ";
					double coeff; 
					double exponent;
					cin>>coeff;
					cout<<"Please state the exponent: ";
					cin>>exponent;
					a= coeff*pow(10,exponent);
					break;
					default:
						cout<<"Alpha has been set to 0.01";
						a=0.01;
			}
			cout<<"File Name: "; 
			cin>>filename;
			
			system("CLS");
			
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
			cout<<"<<          Transient Heat Conduction Experiment [THCE]        <<"<<endl;
			cout<<"<<          Developed by Zakaria Kortam - ENGR 50              <<"<<endl;
			cout<<"<<          Dr. Abdollah Tabrizi | 12/10/2022                  <<"<<endl;
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
			cout<<endl;
			cout<<"Material: "<<item.getName();
			cout<<"File Name: "<<filename<<endl;
			cout<<"Temperature(Left): "<<s1<<endl;
			cout<<"Temperature(Right): "<<s2<<endl;
			cout<<"Temperature(Top): "<<s3<<endl;
			cout<<"Temperature(Bottom): "<<s4<<endl;
			cout<<"Initial Temperature: "<<initial<<endl;
			cout<<"DT: "<<dt<<endl;
			cout<<"DY: "<<dy<<endl;
			cout<<"DX: "<<dx<<endl;
			cout<<"Time Intervals: "<<tt<<endl;
			cout<<"Y Intervals: "<<ty<<endl;
			cout<<"X Intervals: "<<tx<<endl;
			cout<<"Alpha: "<<a<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
			cout<<"<<  Running Program    <<"<<endl;
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
			cout<<endl;
			cout<<"Please state your choice: "<<endl;
			cout<<"(1) Run Experiment "<<endl;
			cout<<"(2) Abort "<<endl;
			cin>>RoA;
			system("CLS");
			
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
			cout<<"<<          Transient Heat Conduction Experiment [THCE]        <<"<<endl;
			cout<<"<<          Developed by Zakaria Kortam - ENGR 50              <<"<<endl;
			cout<<"<<          Dr. Abdollah Tabrizi | 12/10/2022                  <<"<<endl;
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
			cout<<endl;
			cout<<"Material: "<<item.getName();
			cout<<"File Name: "<<filename<<endl;
			cout<<"Temperature(Left): "<<s1<<endl;
			cout<<"Temperature(Right): "<<s2<<endl;
			cout<<"Temperature(Top): "<<s3<<endl;
			cout<<"Temperature(Bottom): "<<s4<<endl;
			cout<<"Initial Temperature: "<<initial<<endl;
			cout<<"DT: "<<dt<<endl;
			cout<<"DY: "<<dy<<endl;
			cout<<"DX: "<<dx<<endl;
			cout<<"Time Intervals: "<<tt<<endl;
			cout<<"Y Intervals: "<<ty<<endl;
			cout<<"X Intervals: "<<tx<<endl;
			cout<<"Alpha: "<<a<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
			cout<<"<<  Calculations Complete. Check Data File   <<"<<endl;
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			
			Material abort;
			switch(RoA){
				case 1: 
					return item = Material(name,s1,s2,s3,s4,dt,dx,dy,tt,tx,ty,a,initial,filename);
					break;
				case 2: 
					return abort;
					exit(EXIT_SUCCESS);
					break;
				default:
					return abort;
			}
			
		}
		
		


