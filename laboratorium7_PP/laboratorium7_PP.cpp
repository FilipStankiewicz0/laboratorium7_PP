// laboratorium7_PP.cpp

//ZADANIE 1
/* #include <iostream>
using namespace std;
int choinka(int n);

int main() {
	int n;
	cout << "Podaj wysokosc choinki: ";
	cin >> n;

	cout << endl << choinka(n);
}

int choinka(int n) {

}
*/

//ZADANIE 2
/* #include <iostream>
using namespace std;
int suma(int n);

int suma(int n) {
	for (int i = n.length; i > 0; i--) {
		n/n.length
	}
}

int main() {
	int n;
	cout << "Podaj liczbe naturalna: ";
	cin >> n;

	cout << endl << "Suma cyfr " << n << "wynosi: " << suma(n);
}
*/

//ZADANIE 3
/* #include <iostream>
using namespace std;
int odwroc(string n);

int odwroc(string n) {

	return ;
}

int main() {
	string n;
	cout << "Podaj napis do odwrocenia: ";
	cin >> n;

	cout << endl << "Odwrocony napis: " << odwroc(n);
}
*/

//ZADANIE 4


//ZADANIE 5
#include <iostream>
using namespace std;
int maks(int x, int* tab, int i);

int maks(int x, int* tab, int i) {
	/* int maksi = tab[0];
	for (int i = 0; i < x; i++) {
		if (tab[i] > maksi) {
			maksi = tab[i];
		}
	}
	return maksi; */
	int maksi = tab[0];
	if (tab[i] > maksi) {
		maksi = tab[i];
	}
	else
		return maks(x, tab, i + 1);
}

int main() {
	int x;
	int i = 0;
	
	cout << "Podaj rozmiar tablicy: ";
	cin >> x;

	int* tab = new int[x];

	for (int i = 0; i < x; i++) {
		cout << endl << "Podaj " << i + 1 << " element tablicy: ";
		cin >> tab[i];
	}

	cout << endl << "Twoja tablica: ";
	for (int i = 0; i < x; i++) {
		cout << tab[i] << " ";
	}

	cout << endl << "Najwiekszy element tablicy: " << maks(x, tab, i);
}