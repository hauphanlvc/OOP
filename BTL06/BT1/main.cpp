#include"SP.h"
int main()
{
	SP a, b, c,d;
	a.Nhap();
	a.Xuat();
	b.Nhap();
	b.Xuat();
	c = a + b;
	c.Xuat();
	d = a - b;
	d.Xuat();
	d = a + 2;
	d.Xuat();
	d = 3 + a;
	d.Xuat();
	d = b - 2;
	d.Xuat();
	d = 3 - a;
	d.Xuat();
}
