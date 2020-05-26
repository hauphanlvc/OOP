#include "SP.h"
#include<iostream> 
using namespace std;
SP::SP(float newfThuc, float newfAo)
{
	this->fThuc = newfThuc;
	this->fAo = newfAo;
}
SP::~SP() {}
istream& operator>>(istream& is, SP& a)
{
	cout << "Nhap Phan thuc = "; is >> a.fThuc;
	cout << "Nhap Phan ao = "; cin >> a.fAo;
	return is;

}
ostream& operator<<(ostream& os, SP a)
{
	if (a.fThuc == 0)
	{
		if (a.fAo != 0)
		{
			if (a.fAo < 0)
				 os << " - " << -a.fAo << "i" << endl;
			else
				os << a.fAo << "i" << endl;
		}
		else os << "0" << endl;
	}
	else
	{
		if (a.fAo != 0)
		{
			if (a.fAo < 0)
				os << a.fThuc << " - " << -a.fAo << "i" << endl;
			else
				os << a.fThuc << " + " << a.fAo << "i" << endl;
		}
		else os << a.fThuc << endl;

	}
	return os;
}
SP SP::operator+(SP a)
{
	SP res;
	res.fThuc = this->fThuc + a.fThuc;
	res.fAo = this->fAo + a.fAo;
	return res;
}
SP operator-(SP a, SP b)
{
	SP res;
	res.fThuc = a.fThuc - b.fThuc;
	res.fAo = a.fAo - b.fAo;
	return res;
}

