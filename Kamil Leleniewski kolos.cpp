
#include <iostream>
using namespace std;

void wypisz(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i];
    }
}
int najwieksza(int tablica[], int rozmiar) {
    int max = 0;
    for (int i = 0; i < rozmiar; i++) {
        if (tablica[i] > max) {
            max = i;
        }

    }
    cout << max;
    return max;

}
int ileZgodnych(int tablica1[1], int tablica2[], int rozmiar) {
    int indeks;
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        if (tablica1[i] == tablica2[i]) {
            indeks = i;
            cout << indeks << ",";
            suma += 1;

        }
    }
    return suma;
}


int tylkoLitery(string napis) {
    int dlugosc = napis.length();
    int zmiany = 0;
    string napis2 = napis;
    for (int i = 0; i < dlugosc; i++) {
        if (!napis[i] > 'a' and !napis[i] < 'z') or (!napis[i] > 'A' and !napis[i] < 'Z') {
            napis2[i] = '-';
            zmiany++;
        }
    }
    return napis2;
}

int main()
{
    srand(time(NULL));
    int tab[100];
    for (int i = 0; i < 20; i++) {
        tab[i] = rand() % 101;
        
    }
    int tab2[100];
    for (int i = 0; i < 20; i++) {
        tab2[i] = rand() % 4;
        cout << tab2[i] << ",";

    }
    cout << "\n";
    int tab3[100];
    for (int i = 0; i < 20; i++) {
        tab2[i] = rand() % 4;
        cout << tab2[i] << ",";
    }

    cout << "\n";
    cout << najwieksza(tab,10);
    cout << "\n";
    cout << ileZgodnych(tab2, tab3, 20);

   
}



