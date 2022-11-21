
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
int najwieksza(int tablica[]) {
	int max = 0;
	for (int i = 0; i < 20; i++) {
		if (tablica[i] > max) {
			max = tablica[i];
		}
	}
	return max;
}
void nNajwiekszych(int tablica[], int n) {
	int max = 0;
	int max2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 20; j++) {
			if (tablica[j] > max and (tablica[j] < max2 or max2 == 0))
				max = tablica[j];
		}
		max2 = max;
		cout << max << " ";
		max = 0;
	}
}
int main()
{
	setlocale(LC_CTYPE, "Polish");
	srand(time(NULL));

	int tab[20];
	for (int i = 0; i < 20; i++) {
		tab[i] = rand() % 101;
		cout << tab[i] << " ";
	}
	int tab2[5];
	for (int i = 0; i < 5; i++) {
		tab2[i] = rand() % 101;
	}
	cout << "\n";
	int suma1 = liczbaParzystych(tab);
	int suma2 = liczbaParzystych(tab2);
	cout << suma1 << " " << suma2 << endl;
	nNajwiekszych(tab,5);
}
