
#include <iostream>

using namespace std;
bool czyRokPrzestepny(int rok, int druga);
int jakasnazwa(int tab[]);
bool czyTrojkat(int kat1, int kat2, int kat3);
int bilans(int przychody,int koszty);
string odwroconyNapis(string napis);
int main()
{
    int rok = 1600;
    cout << czyRokPrzestepny(rok,0);

    srand(time(NULL));
    int tablica[100]; //od 0 do 99
    for (int i = 0; i < 100; i++) {
        tablica[i] = rand() % 5 + 1; //wartosci 1-5 (najpierw robione jest modulo)
    }
    cout << czyTrojkat(60, 50, 70);
    cout << "\n";
    cout << bilans(3000, 2000);
    
}
string odwroconyNapis(string napis) {
    string odwrocony = napis;
    for (int i = 0; i < napis.length(); i++) {
        odwrocony[i] = napis[napis.length() - 1 - i];
    }
    return odwrocony;
}
bool czyRokPrzestepny(int rok,int druga) {
    cout << "druga:" << druga << "\n";
    if (rok % 4 == 0 and rok % 100 != 0 or rok % 400 == 0) {

            return true;  
    }
    else 
    {
        return false;
    }
}


int jakasnzawa(int tab[]) {
    int suma = 0;
    int i = 0;
    while (i<100) {
        suma += tab[i++]; //najpierw zczyta 'i', a później dodaje 1 //++i odwrotnie
    }
    return suma;
}


bool czyTrojkat(int kat1, int kat2, int kat3) {
    if (kat1 + kat2 + kat3 == 180) {
        cout << "Jest to trojkat";
        return true;
    }
    else {
        cout << "Nie jest to trojkat";
        return false;
        
    }

}

int bilans(int przychody, int koszty) {
    if (przychody > koszty) {
        cout << "Zysk:";
        return przychody - koszty;
    }
    else {
        cout << "Strata:";
        return koszty - przychody;
    }

}