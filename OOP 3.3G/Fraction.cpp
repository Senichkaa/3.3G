//Fraction.cpp
#include <iostream> 
#include <cmath> 
#include <stdlib.h> 
#include <string> 
#include <sstream> 
#include "Fraction.h"
#include "LongLong.h"
using namespace std;

Fraction::Fraction()
	:d(0), LongLong(0, 0)
{
}

Fraction& Fraction::operator=(const Fraction& h)
{
	d = h.d;
	return *this;
}

Fraction::operator string() const
{
	return LongLong::operator std::string();
}

Fraction& Fraction::operator++()
{
	LongLong::operator++();
	return *this;
}

Fraction& Fraction::operator--()
{
	LongLong::operator--();
	return *this;
}

Fraction Fraction::operator++(int)
{
	Fraction t(*this);
	LongLong::operator++();
	return t;
}

Fraction Fraction::operator--(int)
{
	Fraction t(*this);
	LongLong::operator--();
	return t;
}

ostream& operator<<(ostream& out, const Fraction& r)
{
	out << string(r);
	return out;
}

istream& operator>>(istream& in, Fraction& r)
{
	cout << "c: " << endl; in >> (LongLong&)r;
	cout << "d: " << endl; in >> r.d;
	cout << endl;
	return in;
}

bool operator>(const Fraction& c1, const Fraction& c2)
{
	return ((LongLong)c1 > (LongLong)c2 ||
		(LongLong)c1 == (LongLong)c2 &&
		c1.get_d() > c2.get_d());
}

bool operator<(const Fraction& c1, const Fraction& c2)
{
	return ((LongLong)c1 < (LongLong)c2 ||
		(LongLong)c1 == (LongLong)c2 &&
		c1.get_d() < c2.get_d());

}

bool operator==(const Fraction& c1, const Fraction& c2)
{
	return  (LongLong)c1 == (LongLong)c2 &&
		c1.get_d() == c2.get_d();

}

bool operator!=(const Fraction& c1, const Fraction& c2)
{
	return !(c1 == c2);
}

bool operator>=(const Fraction& c1, const Fraction& c2)
{
	return !(c1 < c2);
}

bool operator<=(const Fraction& c1, const Fraction& c2)
{
	return !(c1 > c2);
}
