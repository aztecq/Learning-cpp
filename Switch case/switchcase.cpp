#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x, y;
char wybor;


int main() {

	for (;;) {
	cout << "Podaj 1 liczbe: ";
	cin >> x;
	cout << "Podaj 2 liczbe: ";
	cin >> y;
	cout << endl;
	
	cout << "MENU GLOWNE" << endl;
	cout << "===============" << endl;
	cout << "1. Dodawanie" << endl;
	cout << "2. Odejmowanie" << endl;
	cout << "3. Mnozenie" << endl;
	cout << "4. Dzielenie" << endl;
	cout << "5. Wyjscie" << endl;

	cout << endl;
	wybor=_getch();

	switch (wybor)
	{
	case '1':
		cout << "Wynik dodawania: " << x + y << endl;
		break;
	case '2':
		cout << "Wynik odejmownaia: " << x - y << endl;
		break;
	case '3':
		cout << "Wynik mnozenia: " << x * y << endl;
		break;
	case '4':
		if (y == 0) {
			cout << "Nie dzielimy przez 0" << endl;
		}
		else cout << "Wynik dzielenia: " << x / y << endl;
		break;
	case '5':
		exit(0);
		break;

	default: cout << "Nie ma takiej opcji w menu" << endl;
		
	}
	getchar();
	system("csl");
	}

	return 0;
}
