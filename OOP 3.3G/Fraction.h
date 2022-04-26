//Fraction.h
#pragma once
#include <string>
#include <iostream>
#include "LongLong.h"
using namespace std;
class Fraction : private LongLong
{
private:
	double d;
public:

	void set_d(double d) { this->d = d; };
	double get_d() const { return d; };

	Fraction();
	Fraction(double d, LongLong c) :d(d), LongLong(c) {};
	Fraction(const Fraction& s) : d(s.d), LongLong(s) {};

	Fraction& operator =(const Fraction& s);
	operator string() const;

	Fraction& operator ++();
	Fraction& operator --();
	Fraction operator ++(int);
	Fraction operator --(int);

	friend ostream& operator <<(ostream&, const Fraction& s);
	friend istream& operator >>(istream&, Fraction& s);

	friend bool operator > (const Fraction& c1, const Fraction& c2);
	friend bool operator < (const Fraction& c1, const Fraction& c2);
	friend bool operator == (const Fraction& c1, const Fraction& c2);
	friend bool operator != (const Fraction& c1, const Fraction& c2);
	friend bool operator >= (const Fraction& c1, const Fraction& c2);
	friend bool operator <= (const Fraction& c1, const Fraction& c2);

};



