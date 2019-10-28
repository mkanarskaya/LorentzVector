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
	std::cout << "Norma a: ";
	double norma;
	norma = a.norm();
	std::cout << norma << "\n";
	double betta;
	std::cout << "Input betta value:"; std::cin >> betta;
	c = a.trans(betta);
	if (abs(betta) >= 1) {
		std::cout << "betta is more 1, error \n";
		c.print();
	}
	else {
		std::cout << "new: \n";
		c.print();
	}
}

