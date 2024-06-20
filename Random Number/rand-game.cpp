#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int liczba;
int strzal;
int proba = 0;

int main() {
	cout << "Czesc! Pomyslalam o liczbie z zakredu od 1 do 100." << endl;
	srand(time(NULL));
	liczba = rand() % 100 + 1;
	//cout << liczba << endl;

	while (strzal!=liczba) {
		proba++;
		cout << "Zgadnij jaka to liczba: ";
		cin >> strzal;
		cout << "Ilosc prob: " << proba << endl;
		
		if (strzal == liczba) {

			cout << "Brawo! Zgadles liczbe. " << endl;
			cout << "Zgadles za : " << proba << "razem." << endl;

		}
		else if (strzal < liczba) {
			cout << "To za malo." << endl;
		}
		else {
			cout << "To za duzo." << endl;
		}
	}

	system("pause");
	return 0;
}
