#pragma once
#include <iostream>

class Vertex
{
private:
	double x_;
	double y_;
	double z_;

public:

	// Constructors
	Vertex() : x_(0), y_(0), z_(0) {}
	Vertex(double x, double y, double z) : x_(x), y_(y), z_(z) {}
	Vertex(const Vertex& n, double dx = 0, double dy = 0, double dz = 0)
		: x_(n.x() + dx), y_(n.y() + dy), z_(n.z() + dz) {}

	// Operatory
	Vertex operator+(const Vertex& r)
	{
		return Vertex
		(
			x_ + r.x_,
			y_ + r.y_,
			z_ + r.z_
		);
	}

	Vertex operator-(const Vertex& r)
	{
		return Vertex
		(
			x_ - r.x_,
			y_ - r.y_,
			z_ - r.z_
		);
	}

	//- Dot product
	double operator*(const Vertex& r)
	{
		return (x_ * r.x_ + y_ * r.y_ + z_ * r.z_);
	}

	Vertex operator/(const double d)
	{
		if (d == 0)
		{
			std::cout << "Division by zero in operator/ of Vertex." << std::endl;
			exit(-1);
		}
		return Vertex(x_ / d, y_ / d, z_ / d);
	}

	bool operator==(Vertex p)
	{
		if (x_ == p.x() && y_ == p.y() && z_ == p.z())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(Vertex p)
	{
		return !(operator==(p));
	}

	//- Friend
	friend std::ostream& operator<<(std::ostream& os, const Vertex n)
	{
		os << "(" << n.x_ << ", " << n.y_ << ", " << n.z_ << ")" << std::endl;
		return os;
	}

	// Metody

	double x() const
	{
		return x_;
	}

	double y() const
	{
		return y_;
	}

	double z() const
	{
		return z_;
	}

	void move_x(const double dx)
	{
		x_ += dx;
	}

	void move_y(const double dy)
	{
		y_ += dy;
	}

	void move_z(const double dz)
	{
		z_ += dz;
	}

};

