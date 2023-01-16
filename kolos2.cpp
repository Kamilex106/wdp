#include <iostream>
#include <vector>
using namespace std;
int suma(int n) {
	if (n == 0) {
		return 0;
	}
	return n + suma(n-1);
}
int silnia(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * silnia(n - 1);
}

int potega(int a, int n) {
	if (n == 0) {
		return 1;
	}
	return a * potega(a, n - 1);
}
int nwd(int a, int b) {
	if (a != b)
		if (a > b) return nwd(a - b, b);
		else return nwd(a, b - a);
	return a;
}

/// ///////////////////////////////////////////////////////////////


int* zwrocTablice(int rozmiar) {
	int* tab = new int[rozmiar];
	for (int i = 0; i < rozmiar; i++) {
		tab[i] = rand() % 100;
	}
	return tab;
}
void sumaztab(int tab[], int* a) {
	*a = 0;
	for (int i = 0; i < 6; i++) {
		*a += tab[i];
	}
}
int fib(int n) {
	if (n <= 1) {
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}
int* tablicaFib(int rozmiar) {
	int* tab3 = new int[rozmiar];
	for (int i = 0; i < rozmiar; i++) {
		tab3[i] = fib(i);
	}
	return tab3;
}


int main()
{
 
	srand(time(NULL));
	cout << "podaj liczbe:";
	int a = 0;
	int liczba = 0;
	int liczba2 = 0;
	int tablica[6] = {1, 2, 3, 4, 5, 6};
	cin >> liczba;
	cout << endl << "podaj druga liczbe:";
	cin >> liczba2;
	cout << endl << suma(liczba);
	cout << endl << silnia(liczba);
	cout << endl << potega(liczba,liczba2);
	cout << endl << nwd(liczba, liczba2);
	int *tab2 = zwrocTablice(6);
	cout << endl;
	for (int i = 0;i < 6; i++) {
		cout << tab2[i] << ",";
	}
	sumaztab(tablica, &a);
	cout << "sumaztab:" << a;
	
	cout << "Ile elementow (fib)?";
	int elementy = 0;
	cin >> elementy;
	int* tab3 = tablicaFib(elementy);
	if (elementy >= 10) {
		tablicaFib(elementy);
		for (int i = 0; i < 10; i++) {
			cout << tab3[i] << ",";
		}
	}
}

