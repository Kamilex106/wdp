
#include <iostream>
using namespace std;



int liczbaParzystych(int tablica[]) {
	int parzyste = 0;
	for (int i = 0; i < 20; i++) {
		if (tablica[i] % 2 == 0) {
			parzyste++;
		}
	}
	return parzyste;
}
int main()
{
	setlocale(LC_CTYPE, "Polish");
	srand(time(NULL));
	
	int tab[20];
	for (int i = 0; i < 20; i++) {
		tab[i] = rand() % 101;
	}
	int tab2[5];
	for (int i = 0; i < 5; i++) {
		tab2[i] = rand() % 101;
	}
	int suma1 = liczbaParzystych(tab);
	int suma2 = liczbaParzystych(tab2);
	cout << suma1 << " " << suma2 << endl;
}
