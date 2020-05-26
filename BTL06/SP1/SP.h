#pragma once
#include<iostream>
using namespace std;
class SP
{
private:
	float fThuc, fAo;
public:
	SP(float newfThuc = 0, float newfAo = 0);
	~SP();
	//void Nhap();
	//void Xuat();
	friend istream& operator>>(istream& is, SP& a);
	friend ostream& operator<<(ostream& os, SP a);
	SP operator+(SP a);
	friend SP operator-(SP a, SP b);
};

