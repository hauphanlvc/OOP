#include"DT.h"
#include<iostream>
using namespace std;

int main()
{
	DT a, b;
	a.Nhap();
	a.Xuat();
	int x;
	cout << "Nhap x = "; cin >> x;
	a.Tinh(x);
	b.Nhap();
	b.Xuat();
	
	a = a + 1;
	cout << "a = a + 1 " << endl;
	a.Xuat();
	cout << "b = 2 - b " << endl;
	b = 2 - b;
	b.Xuat();
	DT c;
	c = b - a;
	cout << "c = b - a  " << endl;
	c.Xuat();
}