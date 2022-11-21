#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Polish");
	string str;
	cout << "Wpisz jakiś tekst: ";
	cin >> str;
	bool czyA = false;
	for (int i = 0; i < str.length(); i++) {
		cout << str[i];
		if (str[i] == 'a' and !czyA) {
			cout << "\n";
			czyA = true;

		} //!czyA czy czyA to falsz (negacja)
	}
}