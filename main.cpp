#include <iostream>
#include <iomanip>
#include <limits>
#include "package.h"

using namespace std;

int main()
{
	cout << "PACKAGE WEIGHT TRACKER\n"
	     << "----------------------\n";

	     int numPackages;

	     cout << "How many packages? ";
	     cin >> numPackages;

	     while (cin.fail() || numPackages <= 0) {
			cout << "Please enter a valid number greater than 0!: ";

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cin >> numPackages;
	     }

	     double* weights = new double[numPackages]{};

	     enter_packages(weights, numPackages);
	     display_packages(weights, numPackages);

	     double total = calculate_total(weights, numPackages);
	     double average = total / numPackages;
	     double heaviest = find_heaviest(weights, numPackages);

	     cout << fixed << setprecision(2) << "\nTotal Weight: " << total << " lbs\n"; 
	     cout << "Average Weight: " << average << " lbs\n";
	     cout << "Heaviest Package: " << heaviest << " lbs\n";

	     delete[] weights;
	     weights = nullptr;

	     return 0;
}
