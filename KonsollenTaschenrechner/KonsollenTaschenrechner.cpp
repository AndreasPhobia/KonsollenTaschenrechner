#include <iostream>
using namespace std;

double berechne(int wahl, double num1, double num2);

int main()
{
    int wahl;
    double num1, num2;

    cout << "Bitte wähle eine Operation aus\n";
    cout << "1. Addition\n";
    cout << "2. Subtraktion\n";
    cout << "3. Multiplikation\n";
    cout << "4. Division\n";
    cout << "Auswahl (1-4)\n";
    cin >> wahl;

    cout << " Gib die erste Zahl ein: ";
    cin >> num1;
    cout << "Gib die zweite Zahl ein: ";
    cin >> num2;

    double ergebnis = berechne(wahl, num1, num2);

    cout << "Das Ergebniss ist: " << ergebnis << endl;

    return 0;
}
