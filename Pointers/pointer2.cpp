#include <iostream>
using namespace std;

float srednia(float* tab, int ile) {
	float suma = 0;
	for (int i = 0; i < ile; i++){
		suma += *tab;

		tab++;
	}

	return suma / ile;
}

int main(){
	float tablica[3];

	tablica[0] = 1.5;
	tablica[1] = 2.6;
	tablica[2] = 0.74;

	cout << "Srednia wynosi: " << srednia(tablica, 3);


	return 0;
