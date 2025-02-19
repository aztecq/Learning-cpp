#include <iostream>
using namespace std;

int main() {
	string stName;
	string friendname;
	char friendsex = 0;
	int age = 0;
	cout << "Podaj imie osoby, do ktorej chcesz napisac list: ";
	cin >> stName;
	cout << "Podaj imie przyjaciela o ktorego chcesz sie spytac: ";
	cin >> friendname;
	cout << "Podaj plec osoby: ";
	cin >> friendsex;
		cout << "Podaj wiek odbiorcy listu: ";
		cin >> age;

	cout << "Drogi, " << stName << endl << " Co u Ciebie slychac? Jak zdrowie? U mnie wszystko w porzadku.";
	cout << " Widziales sie ostatnio z " << friendname << "? " << endl;

	if (friendsex == 'm')
	{
		cout << "Popros aby do mnie zadzwonil" << endl;
	}
	else if (friendsex == 'k') {
		cout << "Popros aby do mnie zadzownila" << endl;
	}

	cout << "Podobno miales urodziny i masz juz " << age << " lat.";

	if (age <= 0 || age > 110) {
		cout << "BLEDNY WIEK " << endl;
	}
	else if (age == 12) {
		cout << " W przyszlym roku bedziesz miec " << age + 1 << " lat" << endl;
	}
	else if (age == 17) {
		cout << " W przyszlym roku bedziesz mogl glosowac." << endl;
	}
	else if (age >= 70)
	{
		cout << " Zycze milego spedzania czasu na emeryturze." << endl;

	}

	cout << "Pozdrawiam." << "\n\n" << "XYZ" << endl;

	return 0;

}
