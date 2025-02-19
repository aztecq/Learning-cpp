#include <iostream>
using namespace std;

int main() {
	int val1 = 0;
	int val2 = 0;
	
	cout << "Podaj pierwsza liczbe: ";
	cin >> val1;
	cout << "Podaj druga liczbe: ";
	cin >> val2;

	if (val1 > val2) {
		cout << "Wartosc " << val1 << " jest wieksza od " << val2 << endl;
	}
	else if (val1 < val2) {
		cout << "Wartosc " << val1 << " jest mniejsza od " << val2 << endl;
	}

	int suma = val1 + val2;
	cout << "Suma dwoch podanych wartosci: " << suma << endl;

	int roznica = 0;
	if  (val1 > val2) {
		roznica = val1 - val2;
		cout << "Roznica tych liczb wynosi: " << roznica << endl;

	}
	else if (val1 < val2) {
		roznica = val2 - val1;
		cout << "Roznica tych liczb wynosi: " << roznica << endl;

	}

	int iloczyn = val1 * val2;
	cout << "Iloczyn podanych liczb wynosi: " << iloczyn << endl;

}
