// Jalen Gaddy  J00915158       11/14/2022

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const string SENTINEL = "-1";
int main()
{
	string name;
	int numOfVolunteers;
	int numOfBoxesSold;
	int totalNumofBoxesSold;
	double costOfOneBox;

	cout << fixed << showpoint << setprecision(2);
	cout << "Line 14: Enter each volunteer's name and the number of boxes sold by each volunteer, ending with -1" << endl;
	totalNumofBoxesSold = 0;
	numOfVolunteers = 0;
	cin >> name;

	while (name != SENTINEL)
	{
		cin >> numOfBoxesSold;
		totalNumofBoxesSold = totalNumofBoxesSold + numOfBoxesSold;
		numOfVolunteers++;
		cin >> name;
	}
	cout << endl;
	cout << "Line 26: The total nummber of boxes sold: "
		<< totalNumofBoxesSold << endl;
	cout << "Line 27: Enter the cost of one box: ";
	cin >> costOfOneBox;
	cout << endl;
		
	cout << "Line 30: The total money made by selling"
		<< "cookies: $"
		<< totalNumofBoxesSold * costOfOneBox << endl;
	if (numOfVolunteers != 0)
		cout << "Line 32: The average number of boxes sold by each volunteer: "
		<< totalNumofBoxesSold / numOfVolunteers << endl;
	else
		cout << "Line 34: No input." << endl;
	return 0; 

		
}
