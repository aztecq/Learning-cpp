#include <iostream>
using namespace std;
int x = 700;
int gracz1;
int gracz2;
int odleglosc1;
int odleglosc2;

int main(){
	cout << "Ile wedlug Ciebie wynosi szacowana liczba jezykow programowania na calym swiecie?" << endl;
  
	cout << "Odpowiedz gracza 1: ";
	cin >> gracz1;
	cout << endl;

	cout << "Odpowiedz gracza 2: ";
	cin >> gracz2;
	cout << endl;

	odleglosc1 = abs(x - gracz1);
	odleglosc1 = abs(x - gracz2);

	if (odleglosc1 < odleglosc2) {
		cout << "Wygral gracz 1:";
	}
	else if(odleglosc2<odleglosc1){
		cout << "Wygral gracz 2:";
	}
	else {
		cout << "Remis:";

	}
		return 0;
}
