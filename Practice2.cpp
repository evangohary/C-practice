//Practicing using getline, and, using files

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){	
	const int NUM_DRIVERS = 10;
	int drivers;

	ifstream dataIn;
	ifstream dataIn2;  
	string line;
	string line2;	   

	
	dataIn.open("topPoints.txt");
	dataIn2.open("topDrivers.txt");
	if(!dataIn || !dataIn2)
		cout << "Could not open data file. \n";
	else {
	for (drivers = 0; drivers < NUM_DRIVERS; drivers++)
		string line;
		string line2;
		
		int current_line = 0;
		
		while(!dataIn.eof()) {
			cout << line2 << ":   " << endl;
			cout << line << endl;
		
			current_line++;
			getline(dataIn, line);
			getline(dataIn2, line2);
			if (current_line > NUM_DRIVERS)
			break;
		}     
		dataIn.close();        
		dataIn2.close();
		}
}
 