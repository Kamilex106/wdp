#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");
    cout << "Podaj, ile elementów ciągu wypisać:" << endl;
    int n;
    cin >> n;
    if (n < 0) {
        cout << "liczba mniejsza od 0 \n";

    }
    else if (n == 0) {
        cout << "0\n";
    }
    else if (n == 1) {
        cout << "0, 1\n";
    }
    else {
        int current = 1;
        int previous = 0;
        int i = 1;
        cout << previous << ", ";
        while (i <= n) {
            cout << current << ", ";
            int temp = current;
            current += previous;
            previous = temp;
            i++;
        }
    }
    cout << "\n";
}
