e#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int col,name,grade[5][3],average[5],result[5],hs,high,low;
	float pts;
	string student[5];
		for(int name=0;name<5;name++){
			cout <<"("<< name+1 <<")" << "Enter Student's name: "; cin >> student[name];
		for(int u=0;u<3;u++){cout<< setw(4) <<"("<< u+1 <<")" <<"Enter exam scores: ";cin >> grade[name][u];}
			cout << endl;
		}
		
		cout<<"Name"<< setw(100)
			<<"prelims "<< setw(100)
			<<"midterms "<< setw(100)
			<<"semi-finals "<< setw(100)
			<<"finals "<< setw(100)
			<<"exam Average"<< setw(100)
			<<"Average Grade" << endl;
			
		for(int row=0;row<5;row++){
			average[row] = grade[row][0]+grade[row][1]+grade[row][2];
			result[row] = average[row]/3;
				//point thingy algorith
			if(result[row] >= 98 && result[row] <= 100){
				pts = 1.0;
			}
			else if(result[row] >= 95 && result[row] <= 97){
				pts = 1.25;
			}
			else if(result[row] >= 92 && result[row] <= 94){
				pts = 1.5;
			}
			else if(result[row] >= 89 && result[row] <= 91){
				pts = 1.75;
			}
			else if(result[row] >= 86 && result[row] <= 88){
				pts = 2.0;
			}
			else if(result[row] >= 83 && result[row] <= 85){
				pts = 2.25;
			}
			else if(result[row] >= 80 && result[row] <= 82){
				pts = 2.5;
			}
			else if(result[row] >= 77 && result[row] <= 79){
				pts = 2.75;
			}
			else if(result[row] >= 75 && result[row] <= 76){
				pts = 3.0;
			}
			else if(result[row] <= 74){
				pts = 5.0;
			}
			
			cout<< student[row]<< setw(100-student[row].length())
				<<	grade[row][0]<< setw(100)
				<< 	grade[row][1]<< setw(100)
				<< 	grade[row][2]<< setw(100)
				<< 	result[row]<< setw(100)
				<< 	pts << endl;
			
		} 
		high = result[0];
		low = result[0];
		string hpip = student[0];
		string lpip = student[0];
		for(int hs=0;hs<5;hs++){
			if (low > result[hs]){
				low = result[hs];
				lpip = student[hs];
			}
			else if(high < result[hs]){
				high = result[hs];
				hpip = student[hs];
				
			}
		}	
		
		cout << "Student with the Highest exam average: " << hpip << setw(100) << endl;
		cout << "Student with the lowest exam average:" << lpip << setw(100)<< endl;
	
	return 0;
}
