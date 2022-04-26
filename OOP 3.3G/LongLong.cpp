//LongLong.cpp
#include <iostream> 
#include <cmath> 
#include <stdlib.h> 
#include <string> 
#include <sstream> 
#include "LongLong.h"

LongLong::LongLong()
	:a(0), b(0)
{
}

LongLong::LongLong(long x, unsigned long y)
	: a(x), b(y)
{
}

LongLong::LongLong(const LongLong& g)
	: a(g.a), b(g.b)
{
}

LongLong& LongLong::operator=(const LongLong& x)
{
	a = x.a;
	b = x.b;
	return *this;

}

LongLong::operator string() const
{
	stringstream ss;
	ss << "a = " << a << endl;
	ss << "b = " << b << endl;

	return ss.str();

}

LongLong& LongLong::operator++()
{
	this->set_a(this->get_a() + 1);
	return *this;

}

LongLong& LongLong::operator--()
{
	this->set_a(this->get_a() - 1);
	return *this;

}

LongLong LongLong::operator++(int)
{
	LongLong a(*this);
	this->set_a(this->get_a() + 1);
	return a;

}

LongLong LongLong::operator--(int)
{
	LongLong a(*this);
	this->set_a(this->get_a() - 1);
	return a;
}

ostream& operator<<(ostream& out, const LongLong& r)
{
	out << string(r);
	return out;

}

istream& operator>>(istream& in, LongLong& r)
{
	cout << "A = "; in >> r.a;
	cout << "B = "; in >> r.b;
	cout << endl;
	return in;

}

bool operator>(const LongLong& c1, const LongLong& c2)
{
	return (c1.get_a() > c2.get_a() ||
		(c1.get_a() == c2.get_a() &&
			c1.get_b() > c2.get_b()));

}

bool operator<(const LongLong& c1, const LongLong& c2)
{
	return (c1.get_a() < c2.get_a() ||
		(c1.get_a() == c2.get_a() &&
			c1.get_b() < c2.get_b()));

}

bool operator==(const LongLong& c1, const LongLong& c2)
{
	return  c1.get_a() == c2.get_a() &&
		c1.get_b() == c2.get_b();

}

bool operator!=(const LongLong& c1, const LongLong& c2)
{
	return !(c1 == c2);
}

bool operator>=(const LongLong& c1, const LongLong& c2)
{
	return !(c1 < c2);
}

bool operator<=(const LongLong& c1, const LongLong& c2)
{
	return !(c1 > c2);
}

