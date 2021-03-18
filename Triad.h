#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Triad
{
private:
	int x;
	int y;
	int z;
public:
	int getX() const { return x; }
	int getY() const { return y; }
	int getZ() const { return z; }

	void setX(int value) { x = value; }
	void setY(int value) { y = value; }
	void setZ(int value) { z = value; }

	Triad()
		: x(0), y(0), z(0)
	{}
	Triad(int a, int b, int c)
		: x(a), y(b), z(c)
	{}
	Triad(const Triad& a)
		: x(a.x), y(a.y), z(a.z)
	{}

	Triad& operator = (const Triad&);
	void operator ()(const Triad& o)
	{
		if (x == o.x && y == o.y && z == o.z) cout << "Triad1 equal Triad2";
		else if (x < o.x || y < o.y || z < o.z)   cout << "Triad1 less Triad2";
		else if (x > o.x || y > o.y || z > o.z)   cout << "Triad1 more Triad2";
	}
	friend Triad operator + (const Triad&, const Triad&);
	friend Triad operator * (const Triad&, const Triad&);

	bool Init(int x, int y, int z);
	void Display() const;
	void Read();

	friend ostream& operator << (ostream& out, const Triad& m);
	friend istream& operator >> (istream& in, Triad& m);

	operator string () const;

	Triad& operator ++();
	Triad& operator --();
	Triad operator ++(int);
	Triad operator --(int);

	~Triad(void) {};
};
