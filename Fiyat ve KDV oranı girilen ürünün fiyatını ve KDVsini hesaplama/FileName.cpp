#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int fiyat, oran;
	float kdv, tutar;

	cout << "�r�n�n fiyat�n� giriniz : ";
	cin >> fiyat;

	cout << "�r�n�n KDV oran�n� giriniz : ";
	cin >> oran;

	kdv = fiyat * oran / 100;
	tutar = fiyat + kdv;

	cout << "KDV tutar� : " << kdv << "KDV dahil tutar : " << tutar << endl;

	return 0;
}