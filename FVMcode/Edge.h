#pragma once
#include "Vertex.h"

class Edge
{
private:
	Vertex p_;
	Vertex k_;
	double length_;

public: 
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

	Edge(Vertex p, Vertex k) : p_{ p }, k_{ k }, length_(calcLength()) {}

};
