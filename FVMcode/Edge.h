#pragma once
#include "Vertex.h"

class Edge
{
private:
	Vertex p_;
	Vertex k_;
	double length_;

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
			(k_.x() - p_.x()) / d,
			(k_.y() - p_.y()) / d,
			(k_.z() - p_.z()) / d
		);
	}

	// Methods
	Vertex p() const
	{
		return p_;
	}

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
