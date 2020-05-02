#include"SP.h"
#include<iostream>
using namespace std;
int main()
{
	SP a, b, c,d;
	a.Nhap();
	a.Xuat();
	b.Nhap();
	b.Xuat();
	c = a + b;
	cout << " a + b = ";
	c.Xuat();
	cout << " a - b = ";
	d = a - b;
	d.Xuat();
	d = a + 2;
	cout << " a + 2 = ";
	d.Xuat();
	d = 3 + a;
	cout << " 3 + b = ";
	d.Xuat();
	cout << " b - 2 = ";
	d = b - 2;
	d.Xuat();
	cout << " 3 - a = ";
	d = 3 - a;
	d.Xuat();
}
