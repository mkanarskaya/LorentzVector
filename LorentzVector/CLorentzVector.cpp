#include "pch.h"
#include "CLorentzVector.h"


LorentzVector::LorentzVector() {
	this->x = this->y = this->z = this->t = 0;
}

LorentzVector::LorentzVector(double x_, double y_, double z_, double t_) {
	this->x = x_;
	this->y = y_;
	this->z = z_;
	this->t = t_;
}

double LorentzVector::get_x() const {
	return this->x;
};

double LorentzVector::get_y() const {
	return this->y;
};

double LorentzVector::get_z() const {
	return this->z;
};

double LorentzVector::get_t() const {
	return this->t;
};

void LorentzVector::set_lv(double x_, double y_, double z_, double t_) {
	this->x = x_;
	this->y = y_;
	this->z = z_;
	this->t = t_;
}

void LorentzVector:: read(){
	std::cout << "Input x:"; std::cin >> x;
	std::cout << "Input y:"; std::cin >> y;
	std::cout << "Input z:"; std::cin >> z;
	std::cout << "Input t:"; std::cin >> t;

}
void LorentzVector::print() const {
	std::cout << "Lorenz vector: x =" << this->x << ", y = " << this->y << ", z = " << this->z << ", t = " << this->t << "\n";
}

LorentzVector LorentzVector::plus(const LorentzVector & rhs) const{
	LorentzVector result(this->x + rhs.x, this->y + rhs.y, this->z + rhs.z, this->t + rhs.t);
	return result;
}

LorentzVector LorentzVector::minus(const LorentzVector & rhs) const{
	LorentzVector result(this->x - rhs.x, this->y - rhs.y, this->z - rhs.z, this->t - rhs.t);
	return result;
}

LorentzVector LorentzVector::mult(const LorentzVector & rhs) const{
	LorentzVector result(this->x * rhs.x, this->y * rhs.y, this->z * rhs.z, this->t * rhs.t);
	return result;
}

LorentzVector LorentzVector::multscalar(double scalar) const{
	LorentzVector result(this->x * scalar, this->y * scalar, this->z * scalar, this->t * scalar);
	return result;
}

double LorentzVector::norm() const{
	return (this->x*this->x + this->y * this->y + this->z * this->z - this->t * this->t);
}

LorentzVector LorentzVector::trans(double betta) const {
	if (abs(betta) >= 1) return *this;
	else {
		LorentzVector result((x - betta * t) / sqrt(1 - betta * betta), y, z, (t - betta * x) / sqrt(1 - betta * betta));
		return result;
	}
}