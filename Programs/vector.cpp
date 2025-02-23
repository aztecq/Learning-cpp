#include <iostream>
#include "std_lib_facilities.h"
using namespace std;
#include <vector>

int main() {
	vector<string> cyfra_slownie{ "zero", "jeden", "dwa","trzy","cztery","piec","szesc","siedem","osiem","dziewiec" };
	int cyfra;

	cout << "Wpisz cyfre od 0-9: ";
	cin >> cyfra;

	if (cyfra >= 0 && cyfra <= cyfra_slownie.size()) {
		cout << cyfra_slownie[cyfra] << endl;
	}
	else {
		cout << "Bledne dane.";
	}

	return 0;
}
