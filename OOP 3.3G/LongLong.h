//LongLong.h
#pragma once
#include <string>
#include <iostream>
using namespace std;
class LongLong
{
private:
	long a;
	unsigned long b;
public:
	LongLong();
	LongLong(long, unsigned long);
	LongLong(const LongLong& s);

	long get_a() const { return a; }
	unsigned long get_b() const { return b; }

	void set_a(long value) { a = value; }
	void set_b(unsigned long value) { b = value; }

	LongLong& operator = (const LongLong& s);
	operator string() const;

	friend ostream& operator << (ostream& out, const LongLong& s);
	friend istream& operator >> (istream& in, LongLong& s);

	friend bool operator > (const LongLong& c1, const LongLong& c2);
	friend bool operator < (const LongLong& c1, const LongLong& c2);
	friend bool operator == (const LongLong& c1, const LongLong& c2);
	friend bool operator != (const LongLong& c1, const LongLong& c2);
	friend bool operator >= (const LongLong& c1, const LongLong& c2);
	friend bool operator <= (const LongLong& c1, const LongLong& c2);

	LongLong& operator ++();
	LongLong& operator --();
	LongLong operator ++(int);
	LongLong operator --(int);
};

