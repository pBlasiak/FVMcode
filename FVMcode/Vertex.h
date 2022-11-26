#pragma once
class Vertex
{
private:
	double x_;
	double y_;
	double z_;

public:
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

	Vertex() : x_(0), y_(0), z_(0) {}
	Vertex(double x, double y, double z) : x_(x), y_(y), z_(z) {}
	Vertex(const Vertex& n, double dx = 0, double dy = 0, double dz = 0)
		: x_(n.x() + dx), y_(n.y() + dy), z_(n.z() + dz) {}
};