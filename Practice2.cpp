//array practice

#include <iostream>
#include <fstream>
#include <iomanip>
//#include <sstream>
using namespace std;

int main(){
	
	const int NUM_DRIVERS = 10;
	int drivers,
	count,
	driverNum;
	double points[NUM_DRIVERS],
	highestPoints;
	
	string driver[] = { "Max Verstappen", "Sergio Perez", "Charles Leclerc",
						"George Russell", "Carlos Sainz", "Lewis Hamilton",
						"Lando Norris", "Esteban Ocon", "Fernando Alanso",
						"Valtteri Bottas"
	};
 
	//open file

	ifstream dataIn;
	string line;
	dataIn.open("topPoints.txt");
	if(!dataIn)
		cout << "Could not open data file. \n";
	else {
	for (drivers = 0; drivers < NUM_DRIVERS; drivers++)
		//dataIn >> points[drivers];
		
		
		string line;
		int current_line = 0;
		
		while(!dataIn.eof()) {
			cout << line << endl;
			current_line++;
			getline(dataIn, line);
			if (current_line > NUM_DRIVERS)
			break;
		}                 
		
		}
		
for (string val : driver)
		cout << val << ":  "  <<  endl;
	




}
 