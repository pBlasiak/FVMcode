#pragma once
#include "Vertex.h"

class Edge
{
private:
	Vertex p_;
	Vertex k_;
	double length_;
	static long numEdges_; // trzeba dodac copy constructor i assignment
	long label_;

public: 
	// Constructors
	Edge(Vertex p, Vertex k) : p_{ p }, k_{ k }, length_(calcLength()) {}

	// Operators
	Vertex operator/(const double d)
	{
		if (d == 0)
		{
			std::cout << "Division by zero in operator/ of Edge." << std::endl;
			exit(-1);
		}
		return Vertex
		(
			p_.x() + (k_.x() - p_.x()) / d,
			p_.y() + (k_.y() - p_.y()) / d,
			p_.z() + (k_.z() - p_.z()) / d
		);
	}

	//- Dot product
	double operator*(Edge p)
	{
		return (k_ - p_)*(p.k_ - p.p_);
	}

	//- Methods
	//- Begining of an edge
	Vertex p() const
	{
		return p_;
	}

	//- End of an edge
	Vertex k() const
	{
		return k_;
	}

	double length() const
	{
		return length_;
	}
	
	double calcLength() const
	{
		return sqrt
		(
			pow(k_.x() - p_.x(),2)
		  +	pow(k_.y() - p_.y(),2)
		  +	pow(k_.z() - p_.z(),2) 
		);
	}


};
