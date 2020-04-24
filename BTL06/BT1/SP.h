#pragma once
class SP
{
private:
	float fThuc, fAo;
public:
	SP(float newfThuc = 0, float newfAo = 0);
	SP(int n);
	~SP();
	void Nhap();
	void Xuat();
	//SP operator+(SP a);
	//SP operator+(int n);
	friend SP operator-(SP a, SP b);
	friend SP operator+(SP a, SP b);
};

