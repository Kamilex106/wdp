#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int rozmiar_wektora;
	vector<int> v1;
	//1
	cout << "Podaj rozmiar wektora:";
	cin >> rozmiar_wektora;
	srand(time(NULL));;
	//2
	for (int i = 0; i < rozmiar_wektora; i++) {
		v1.push_back(rand() % 101);
		cout << v1[i] << ",";
	}
	cout << endl << "ilosc elementow:" << v1.size() << endl;
	//3
	if (v1.size() >= 2) {
		int srodkowy = v1.size() / 2;
		int srodkowy2 = v1.at(srodkowy);
		cout << endl << "srodkowa:" << srodkowy2 << endl;
		//4
		for (int i = 0; i < rozmiar_wektora; i++) {
			if (v1[i] < srodkowy2) {
				v1[i] += 1;
			}
		}
		//5
		bool wystapil = false;
		for (int i = 0; i < rozmiar_wektora; i++) {
			if (v1.at(i) > 90 and !wystapil and v1.size() > rozmiar_wektora) {
				wystapil = true;
				v1.insert(v1.begin() + i, srodkowy2);
			}
		}
		//6
		if (wystapil = true or v1.size() > rozmiar_wektora) {
			v1.erase(v1.end() - 2, v1.end() - 1);
			for (int i = 0; i < rozmiar_wektora; i++) {
				cout << v1[i] << ",";
			}
		}
	}
	
	
	
}

