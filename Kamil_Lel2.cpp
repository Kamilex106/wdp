#include <iostream>
using namespace std;
int fib(int n);
int suma(int n);
int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
   // cout << fib(6) << endl;
    cout << suma(liczba);
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