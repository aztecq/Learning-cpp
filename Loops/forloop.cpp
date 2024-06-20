#include <iostream>
using namespace std;

string name;
int number;

int main(){

	cout << "Your name: ";
	cin >> name;
	cout << "Give a whole number: ";
	cin >> number;

	for (int i = 1; i <= number; i++) {
		cout << i << ". " << name << endl;
	}
	cout << "Zakonczono odlcizanie.";
}
