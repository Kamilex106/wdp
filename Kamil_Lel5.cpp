#include <iostream>
using namespace std;
int nwd(int a, int b);
int main()
{
    int liczba;
    int liczba2;
    cout << "Podaj 1 liczbe: ";
    cin >> liczba;
    cout << "Podaj 2 liczbe: ";
    cin >> liczba2;
    cout << nwd(liczba, liczba2);
}

int nwd(int a, int b) {
    int reszta;
    reszta = (a % b);
    if (a % b == 0) {
        return b;
    }
    a = int b;
    int b = reszta;


}