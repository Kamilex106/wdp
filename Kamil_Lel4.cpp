#include <iostream>
using namespace std;
int fib(int n);
int suma(int n);
int silnia(int n);
int potega(int n, int a);
int main()
{
    int liczba;
    int liczba2;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Podaj potege: ";
    cin >> liczba2;

    // cout << fib(6) << endl;
    cout << potega(liczba, liczba2);
}

int fib(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return fib(n - 2) + fib(n - 1);
    }
}

int suma(int n) {
    if (n < 1) {
        return 0;
    }
    return n + suma(n - 1);
}

int silnia(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * silnia(n - 1);

}

int potega(int n, int a) {
    if (a == 0) {
        return 1;
    }
    return n * potega(n, a - 1);
}