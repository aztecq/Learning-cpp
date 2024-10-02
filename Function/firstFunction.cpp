#include <iostream>
using namespace std;

float metry;

float ileCali(float m) {
	return m * 39.37;
}

float ileJardow(float x) {
	return x*1.0936;
}

void  ileMil(float m) {
	cout << "na mile: : " << m * 0.000621371;
}

int main(){
	cout << "Podaj ile metrow chcesz przeliczyc: ";
	cin >> metry;

	cout << "na cale: " << ileCali(metry);
	cout << "na jardy: " << ileJardow(metry);
	ileMil(metry);

	return 0;
