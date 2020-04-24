#include"SP.h"
int main()
{
	SP a, b, c, d;
	a.Nhap();
	a.Xuat();
	b.Nhap();
	b.Xuat();
	c = a + b;
	c.Xuat();
	d = a - b;
	d.Xuat();
}