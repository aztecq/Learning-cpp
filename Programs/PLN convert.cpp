#include <iostream>
using namespace std;

int main() {
	int jednogroszowki = 0;
	int dwugroszowki = 0;
	int piecioogroszowki = 0;
	int dziesieciogroszowki = 0;
	int dwudziestogroszowki = 0;
	int piecdziesieciogroszowki = 0;

	cout << "Podaj ile masz jednogroszowek: ";
		cin >> jednogroszowki;
		cout << "Podaj ile masz dwugroszowek: ";
		cin >> dwugroszowki;
		cout << "Podaj ile masz pieciogroszowek: ";
		cin >> piecioogroszowki;
		cout << "Podaj ile masz dziesieciogroszowek: ";
		cin >> dziesieciogroszowki;
		cout << "Podaj ile masz dwudziestogroszowek: ";
		cin >> dwudziestogroszowki;
		cout << "Podaj ile masz piecdziesieciogroszowek: ";
		cin >> piecdziesieciogroszowki;

		int suma = jednogroszowki + (dwugroszowki*2)+ (piecioogroszowki*5)+ (dziesieciogroszowki*10) + (dwudziestogroszowki*20) + (piecdziesieciogroszowki*50);
		cout << "Masz " << suma << " groszy."
			<< " W przeliczeniu na zlotowki daje to: " << suma / 100 << " zl. ";
