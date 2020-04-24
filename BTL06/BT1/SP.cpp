#include "SP.h"
#include<iostream> 
using namespace std;
SP::SP(float newfThuc , float newfAo)
{
	this->fThuc = newfThuc;
	this->fAo = newfAo;
}
SP::~SP(){}
void SP::Nhap()
{
	cout << "Nhap Phan thuc = "; cin >> this->fThuc;
	cout << "Nhap Phan ao = "; cin >> this->fAo;
	
}
void SP::Xuat()
{
	if (fThuc == 0)
	{
		if (fAo != 0)
		{
			if (fAo < 0)
				cout << " - " << -fAo << "i" << endl;
			else
				cout << fAo << "i" << endl;
		}
		else cout << "0" << endl;
	}
	else
	{
		if (fAo != 0)
		{
			if (fAo < 0)
				cout << fThuc << " - " << -fAo << "i" << endl;
			else
		{
					if (fAo == 1)
					cout << fThuc << " + i" << endl;
					else
						cout << fThuc << " + " << fAo << "i" << endl;
		}
		}
		else cout << fThuc << endl;

	}
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

