#pragma once
#include <iostream>
#include <math.h>

class LorentzVector {
private:
	double x, y, z, t;
public:
	LorentzVector();
	LorentzVector(double, double, double, double);
	
	double get_x() const;
	double get_y() const;
	double get_z() const;
	double get_t() const;
	
	void set_lv(double, double, double, double);
	
	void read();
	void print();
	
	LorentzVector plus(const LorentzVector &);
	LorentzVector minus(const LorentzVector &);
	LorentzVector mult(const LorentzVector &);
	LorentzVector multscalar(double);
	LorentzVector trans(double);
	double norm();
};
