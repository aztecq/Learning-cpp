#include <iostream>
using namespace std;

int main() {
int mile = 0;
int kilometry = 0;

cout << "Podaj ile mili chcesz przekonwertowac na kilometry: ";
cin >> mile;
kilometry = mile * 1.609;
cout << mile << " mil, po konwersji na kilometry to : " << kilometry << " km" << endl;
}
