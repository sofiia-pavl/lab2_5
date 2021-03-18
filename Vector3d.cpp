#include "Vector3d.h"

void Vector3d::Display() const
{
	cout << endl;
	cout << "vector = " << endl;
	vector.Display();
}
void Vector3d::Read()
{
	Triad v;
	cout << endl;
	cout << "Vector = ?" << endl;
	v.Read();
	Init(v);
}

Vector3d operator +(const Vector3d& o, const Vector3d& u)
{
	Vector3d s;
	int a = o.vector.getX() + u.vector.getX();
	int b = o.vector.getY() + u.vector.getY();
	int c = o.vector.getZ() + u.vector.getZ();

	s.vector.setX(a);
	s.vector.setY(b);
	s.vector.setZ(c);

	return s;
}

int operator * (const Vector3d o, const Vector3d u)
{

	int a = o.vector.getX() * u.vector.getX();
	int b = o.vector.getY() * u.vector.getY();
	int c = o.vector.getZ() * u.vector.getZ();

	int s = a + b + c;

	return s;
}

ostream& operator <<(ostream& out, const Vector3d& c)
{
	out << string(c);
	return out;
}

istream& operator >>(istream& in, Vector3d& c)
{
	cout << endl;
	cout << "vector = ? "; in >> c.vector;

	return in;
}

Vector3d::operator string() const
{
	return string(vector);
}

Vector3d& Vector3d::operator++()
{
	++vector;
	return*this;
}

Vector3d& Vector3d::operator--()
{
	--vector;
	return*this;
}

Vector3d Vector3d::operator++(int)
{
	Vector3d s(*this);
	vector++;
	return s;
}

Vector3d Vector3d::operator--(int)
{
	Vector3d s(*this);
	vector--;
	return s;
}