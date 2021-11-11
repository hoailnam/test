#include <iostream>
using namespace std;
int main()
int tong(int a, int b);
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	if(phepToan=="+"){
		tong(a,b);
	}
	system("pause");
	return 0;
}
int tong(int a, int b){
	return (a+b);
}