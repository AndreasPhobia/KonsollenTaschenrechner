#include <iostream>
using namespace std;

double berechne(int wahl, double num1, double num2) {
	double ergebnis = 0;
	switch (wahl) {
	case 1:
		ergebnis = num1 + num2;
		break;
	case 2:
		ergebnis = num1 - num2;
		break;
	case 3:
		ergebnis = num1 * num2;
		break;
	case 4:
		if (num2 != 0) {
			ergebnis = num1 / num2;
		}
		else {
			cout << "Division durch NUll ist nicht erlaubt. \n";
		}
		break;
	default:
	cout << "Ungültige Auswahl.\n";
		break;
	}
	return ergebnis;
}