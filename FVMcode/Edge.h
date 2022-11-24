#pragma once
#include "Node.h"

class Edge
{
private:
	Node p_;
	Node k_;
	double length_;

public: 
	Node p() const
	{
		return p_;
	}

	Node k() const
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

	Edge(Node p, Node k) : p_{ p }, k_{ k }, length_(calcLength()) {}

};
