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
	//2
	srand(time(NULL));
	for (int i = 0; i < rozmiar_wektora; i++) {
		v1.push_back(rand() % 101);
		cout << v1[i] << ",";
	}
	//3
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
	bool czywystapil = false;
	for (int i = 0; i < rozmiar_wektora; i++) {
		if (v1.at(i) > 90 and !czywystapil) {
			if (v1.begin() + i < v1.end()) {
				v1.insert(v1.begin() + i, srodkowy2);
				czywystapil = true;
			}
		}
	}
	//6
	if (v1.size() >= 2) {
		v1.erase(v1.end() - 2, v1.end() - 1);
		for (int i = 0; i < v1.size(); i++) {
			cout << v1[i] << ",";
		}
	}
	
}


