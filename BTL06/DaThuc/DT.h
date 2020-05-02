#pragma once
class DT
{
private:
	int n;
	int* Heso;
public:
	DT();
	DT(int n);
	DT(const DT &a);
	void Nhap();
	void Xuat();
	void Tinh(int x);
	friend DT operator+(DT a, DT b);
	friend bool operator!=(DT a, DT b);
	friend DT operator-(DT a, DT b);
};

