#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int ile;
clock_t start, stop;
double czas;

int main() {
	cout << "Podaj ilosc liczb w tablicy: ";
	cin >> ile;

	int *tablica;
		tablica = new int[ile];

		start = clock();

		for (int i = 0; i < ile; i++) {
			tablica[i] = i;
			tablica[i] += 50;
		}
		stop = clock();
		czas = (double) (stop - start)/ CLOCKS_PER_SEC;
		cout << "Czas zapisu bez wskaznika: " << czas << endl;
		delete [] tablica;

		tablica = new int[ile];
		int *wskaznik=tablica;

		start = clock();

		for (int i = 0; i < ile; i++) {

			*wskaznik = i;
			*wskaznik += 50;
			wskaznik++;
		}

		stop = clock();
		czas = (double)(stop - start) / CLOCKS_PER_SEC;

		cout << "Czas zapisu ze wskaznikiem: " << czas << endl;

		delete[] tablica;

	 for (int i = 0; i < ile; i++) {
		cout << (int)tablica << endl;
		tablica++;


	return 0;
}
