#include<iostream>
#include <math.h>
#define PI 3.1417
#include <string>
#include <cstdlib>
using namespace std;
int main(int argc, char* argvp[])
/*Zadanie 1

{
	double x, y, i;
	setlocale(LC_ALL, "pl-PL");
	cout << "Wybierz figure: " << endl;
	cout << "1 - prostokąt " << endl;
	cout << "2 - koło" << endl;

	int choice;
	cin >> choice;

	switch (choice)
	{

	case 1:
		cout << "Podaj długości boków prostokąta: ";
		cin >> x >> y;
		cout << "Pole prostokąta wynosi: " << x * y << endl;
		break;
	case 2:
		cout << "Podaj długość promienia koła: ";
		cin >> i;
		cout << "Pole koła wynosi: " << PI * pow(i, 2) << endl;
		break;
	default:
		break;
	}
	{
		double x, y, z, u;
		cout << "Podaj wysokosc trojkata" << endl;
		cin >> u;
		cout << "Podaj podstawe" << endl;
		cin >> x;
		cout << "Podaj bok 1" << endl;
		cin >> y;
		cout << "Podaj bok 2" << endl;
		cin >> z;
		double obwod, pole;
		obwod = x + y + z;    pole = (x * u) / 2;
		cout << "Pole trojkata wynosi " << pole << endl;
		cout << "Obwod trojkata wynosi" << obwod << endl;
	}
	{

		int a, b, c;

		cout << "Podaj dlugosc boku a ";

		cin >> a;


		b = a * a * 6;

		c = a * a * a;


		cout << "Pole szescianu wynosi: " << b << endl << "Objetosc wynosi: " << c;

	}
	
	{

		int r, h;
		cin >> r >> h;
		cout << (3.14 * (r * r)) * h << endl;
		cout << (2 * (3.14 * (r * r))) + (2 * 3.14 * r * h);

	}
	

	


}


/*zad2
bool czy_pierwsza(int n)
{
	if (n < 2)
		return false;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}


{
	int n;

	cout << "Podaj liczbę: ";
	cin >> n;

	if (czy_pierwsza(n)) 
		cout << "Liczba " << n << " jest pierwsza" << endl;
	else
		cout << "Liczba " << n << " nie jest pierwsza" << endl;

	return 0;
}*/
/*Zad 3
void dec_to_bin(int liczba)
{
	int i = 0, tab[31];

	while (liczba) 
	{
		tab[i++] = liczba % 2;
		liczba /= 2;
	}

	for (int j = i - 1; j >= 0; j--)
		cout << tab[j];
}

int main()
{
	int liczba;

	cout << "Podaj liczbę: ";
	cin >> liczba;

	cout << liczba << " po zamianie na postac binarna: ";
	dec_to_bin(liczba);
	cout << endl;

	return 0;
}
*/



