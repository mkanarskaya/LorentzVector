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
	void print() const;
	
	LorentzVector plus(const LorentzVector &) const;
	LorentzVector minus(const LorentzVector &) const;
	LorentzVector mult(const LorentzVector &) const;
	LorentzVector multscalar(double) const;
	LorentzVector trans(double) const;
	double norm() const;
};
