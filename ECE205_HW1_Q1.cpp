/*q1 Input seconds output days, minutes, and seconds*/
#include <iostream>
using namespace std;

int input_seconds; //input

int main() 
{
	cout << "Enter the time in seconds: ";
	cin >> input_seconds;
	
	int hours = input_seconds / 3600;
	int seconds_remainder = input_seconds % 3600;
	int minutes = seconds_remainder / 60;
	int actual_seconds = seconds_remainder % 60;

	double hours_exact = input_seconds / 3600.0;
	double minutes_exact = input_seconds / 60.0;

	cout << hours << " hours, " << minutes << " minutes, " << actual_seconds << " seconds." << endl;
	cout.setf(ios::fixed);
	cout.precision(4);
	cout << hours_exact << " hours" << endl;
	cout << minutes_exact << " minutes" << endl;
	return 0;
}