#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int fiyat, oran;
	float kdv, tutar;

	cout << "Ürünün fiyatýný giriniz : ";
	cin >> fiyat;

	cout << "Ürünün KDV oranýný giriniz : ";
	cin >> oran;

	kdv = fiyat * oran / 100;
	tutar = fiyat + kdv;

	cout << "KDV tutarý : " << kdv << "KDV dahil tutar : " << tutar << endl;

	return 0;
}