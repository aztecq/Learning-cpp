#include <iostream>
using namespace std;


//REKURENCJA
int f(int n) {
	if (n == 0) return 3;
	else return f(n - 1) + 2;
}

//POTEGOWANIE
long int potega(int p, int w) {
	if (w == 0) return 1;
	else return p * potega(p, w - 1);

	}

//CIAG FIBONACCIEGO
long int fib(int n) {
	if (n == 1 || n == 2) return 1;
	else return fib(n - 1) + fib(n - 2);
}

//SILNIA
long double silnia(int n) {
	if (n == 0) return 1;
	else return n * silnia(n - 1);
}
int main() {

	cout << "Rekurencja: " <<f(6) << endl;
	cout << "Potega: " << potega(6, 4) << endl;
	cout << "Ciag Fibonacciego:" <<fib(6) << endl;
	cout <<"Silnia: " << silnia(6) << endl;


	return 0;
