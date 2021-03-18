#pragma once
#include "Triad.h"

class Vector3d
{
private:
	Triad vector;
public:
	Triad getVector() const { return vector; }
	void setVector(Triad value) { vector = value; }

	Vector3d()
		:vector()
	{}
	Vector3d(const Triad v)
		:vector(v)
	{}
	Vector3d(const Vector3d& v) { vector = v.vector; }

	friend ostream& operator <<(ostream& out, const Vector3d& c);
	friend istream& operator >>(istream& in, Vector3d& c);

	operator string () const;

	Vector3d& operator++();
	Vector3d& operator--();
	Vector3d operator++(int);
	Vector3d operator--(int);

	friend Vector3d operator + (const Vector3d&, const Vector3d&);
	friend int operator * (const Vector3d, const Vector3d);

	void Init(Triad vector) { setVector(vector); }
	void Display() const;
	void Read();

	~Vector3d(void) {};

};

