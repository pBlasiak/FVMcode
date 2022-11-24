#pragma once
class Node
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

	Node() : x_(0), y_(0), z_(0) {}
	Node(double x, double y, double z) : x_(x), y_(y), z_(z) {}
};
