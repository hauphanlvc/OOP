#pragma once
class SP
{
private:
	float fThuc, fAo;
public:
	SP(float newfThuc = 0, float newfAo = 0);
	~SP();
	void Nhap();
	void Xuat();
	SP operator+(SP a);
	friend SP operator-(SP a, SP b);
};

