#include "DT.h"
#include<iostream>
#include<algorithm>
using namespace std;
DT::DT()
{
	this->n = 0;
	Heso = new int[n + 1];
	Heso[0] = 0;
}
DT::DT(int newN)
{
	this->n = 0;
	Heso = new int[1];
	Heso[0] = newN;
}
DT::DT(const DT &a)
{
	DT c;
	this->n = a.n;
	Heso = new int[n];
	for (int i = 0; i <= n; i++)
		Heso[i] = a.Heso[i];
	
}
void DT::Nhap()
{
	cout << "Nhap bac lon nhat cua da thuc : ";
	cin >> this->n;
	Heso = new int[n + 1];
	for (int i = 0; i <= n; i++)
		Heso[i] = 0;
	
	for (int i = 0; i <= n; i++)
	{
		cout << "Nhap he so cua bac " << i << ": "; cin >> Heso[i];

	}

}
void DT::Xuat()
{
	cout << "Da thuc la : ";
	if (n == 0) {
		cout << Heso[0] << endl;
		return;
	}
	if ( Heso[n]!=0) 
	cout << Heso[n] << "x^" << n<<" ";
	for (int i = n - 1; i >=1; i--)
		if (Heso[i] > 0) 
			cout << "+ " << Heso[i] << "x^" << i << " ";
		else 
			if ( Heso[i]<0)
				cout << "- " << -Heso[i] << "x^" << i << " ";
	if (Heso[0] > 0) cout << "+ " << Heso[0];
	else 
		if (Heso[0]<0)
		cout << "- " << -Heso[0];
	cout << endl;



}
bool operator!=(DT a, DT b)
{
	if (a.n != b.n) return 1;
	return 0;
}
DT operator+(DT a, DT b)
{
	
		if (a.n <= b.n)
		{
			DT c(b);
			for (int i = 0; i <= a.n; i++)
				c.Heso[i] = a.Heso[i]+c.Heso[i];
			return c;
		}
		else
		
			{
				DT c(a);
				for (int i = 0; i <= b.n; i++)
					c.Heso[i] = b.Heso[i] + c.Heso[i];
				return c;
			}
		
	
	
}
DT operator-(DT a, DT b)
{
	
	DT c(b);
	for (int i = 0; i <= b.n; i++)
		c.Heso[i] = -c.Heso[i];
	return a + c;
	
}
void DT::Tinh(int x)
{
	
	int Tong = 0;
	for (int i = 0; i <= this->n; i++)
		if (Heso[i] != 0) Tong =Tong +  Heso[i] * pow(x, i);
	cout << "gia tri cua da thuc tai x = " << x << " la : "<<Tong<<endl;

}

