#include <iostream>
#include "std_lib_facilities.h"
using namespace std;
#include <vector>

int main() {
	vector<string> cyfra_slownie{ "zero", "jeden", "dwa","trzy","cztery","piec","szesc","siedem","osiem","dziewiec" };
	vector <int> cyfra_znak{ 0,1,2,3,4,5,6,7,8,9 };
	int znak;
	string slowo;

	cout << "Wpisz cyfre od 0-9 badz jej nazwe: ";
	
	if (cin >> znak) {
		if (znak >= 0 && znak < cyfra_slownie.size()) {
			cout << cyfra_slownie[znak] << endl;
		}
		else {
			cout << "Bledne dane.";
		}
	}
	else {

		cin.clear();
		cin >> slowo;
		bool found = false;

		for (int i = 0; i < cyfra_slownie.size(); i++) {
			if (cyfra_slownie[i] == slowo) {
				cout << i <<  endl;
				found = true;
				break;
			}
			}
		if (!found) {
			cout << "Bledne dane.";
		}
	}

	return 0;
}
