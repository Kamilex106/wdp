#include <iostream>
using namespace std;
int fib(int n);
int suma(int n);
int main()
{
    cout << fib(6) << endl;
    cout << suma(10);
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
    return n + suma(n - 1);
}