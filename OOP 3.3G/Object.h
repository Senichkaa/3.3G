//Object.h
#pragma once
using namespace std;
class Object
{
	static unsigned int count;
public:
	static unsigned int Count()
	{
		return count;
	}
	Object()
	{
		count++;
	}
	~Object()
	{
		count--;
	}
};


