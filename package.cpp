#include <iostream>
#include <iomanip>
#include <limits>
#include "package.h"

using namespace std;

void enter_packages(double* weights, int size){
	for (int i = 0; i < size; i++) {
		cout << "Enter weight for package " << i + 1 << ": ";
		cin >> weights[i];

		while (cin.fail() || weights[i] <= 0) {
			cout << "Please enter a valid weight greater than 0!: ";

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cin >> weights[i];
		}
	}
}

void display_packages(const double* weights, int size) {
	cout << "\nPACKAGE SUMMARY\n"
	     << "---------------\n";

	for (int i = 0; i < size; i++) {
		cout << fixed << setprecision(2);
		cout << "Package " << i + 1 << ": "
		     << weights[i] << " lbs\n";
	}
}

double calculate_total(const double* weights, int size) {
	double total = 0;

	for (int i = 0; i < size; i++) {
		total += weights[i];
	}

	return total;
}

double find_heaviest(const double* weights, int size) {
        double heaviest = weights[0];

        for (int i = 0; i < size; i++) {
                if (weights[i] > heaviest) {
			heaviest = weights[i];
                }
        }

        return heaviest;
}
