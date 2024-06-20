#include <iostream>
using namespace std;

float liczby[7];
float suma = 0;
float srednialiczb;

int main() {
	
	for (int i = 0; i < 7; i++) {
		cout << endl << "Podaj " << i +1 << " liczbe: ";
		cin >> liczby[i];
		suma += liczby[i];
	}

	srednialiczb = suma / 7;

	cout << endl << "Suma liczb wynosi: : " << suma;
	cout << endl << "Srednia liczb wynosi: " << srednialiczb;

	return 0;
}
