// LorentzVector.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "CLorentzVector.h"

int main()
{
	LorentzVector a, b(2,3,4,7);
	a.read();
	std::cout << "Vector a: \n";
	a.print();
	std::cout << "Vector b: \n";
	b.print();
	LorentzVector c = a.plus(b);
	std::cout << "a+b: \n";
	c.print();
	c = a.minus(b);
	std::cout << "a-b: \n";
	c.print();
	c = a.mult(b);
	std::cout << "a*b: \n";
	c.print();
	double scalar;
	std::cout << "Input scalar value:"; std::cin >> scalar;
	c = a.multscalar(scalar);
	std::cout << "a*" << scalar << ": \n";
	c.print();
	double betta;
	std::cout << "Input betta value:"; std::cin >> betta;
	c = a.trans(betta);
	std::cout << "new: \n";
	c.print();
}

