#include "Triad.h"

bool Triad::Init(int x, int y, int z)
{
	setX(x);
	setY(y);
	setZ(z);
	return true;
}
void Triad::Display() const
{
	cout << endl;
	cout << "first = " << x << endl;
	cout << "second = " << y << endl;
	cout << "third = " << z << endl;
}
void Triad::Read()
{
	int x, y, z;
	cout << endl;
	cout << "first = ?"; cin >> x;
	cout << "second = ?"; cin >> y;
	cout << "third = ?"; cin >> z;
	Init(x, y, z);
}

Triad& Triad::operator = (const Triad& t)
{
	this->x = t.x;
	this->y = t.y;
	this->z = t.z;

	return *this;
}

ostream& operator <<(ostream& out, const Triad& m)
{
	out << string(m);
	return out;
}
istream& operator >>(istream& in, Triad& m)
{
	int x, y, z;
	cout << endl;
	cout << "x = ? "; in >> x;
	cout << "y = ? "; in >> y;
	cout << "z = ? "; in >> z;
	m.Init(x, y, z);
	return in;
}
Triad::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "x = " << x << endl;
	ss << "y = " << y << endl;
	ss << "y = " << z << endl;
	return ss.str();
}

Triad& Triad:: operator ++()
{
	++x;
	return *this;
}

Triad& Triad:: operator --()
{
	--x;
	return *this;
}
Triad Triad:: operator ++(int)
{
	Triad t(*this);
	++y;
	return t;
}
Triad Triad:: operator --(int)
{
	Triad t(*this);
	--y;
	return t;
}

Triad operator +(const Triad& a, const Triad& b)
{
	Triad t;
	t.x = a.x + b.x;
	t.y = a.y + b.y;
	t.z = a.z + b.z;
	return t;
}

Triad operator *(const Triad& a, const Triad& b)
{
	Triad t;
	t.x = a.x * b.x;
	t.y = a.y * b.y;
	t.z = a.z * b.z;
	return t;
}
