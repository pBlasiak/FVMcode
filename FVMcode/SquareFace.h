#pragma once
#include "Face.h"
#include "Edge.h"
#include "Vertex.h"

class SquareFace : public Face
{
private:
	//- Left bottom corner
	Vertex basePoint_;
	double length_;

public:

	//- Assumed that square is parallel to z plane
	//  the two edges are parallel to x and y axes respectively.
	//  Default square is of length 1 at (0,0,0)
	SquareFace();
	SquareFace(const Vertex& n, double l);

	// Methods
	Vertex bp() const
	{
		return basePoint_;
	}

	double side() const
	{
		return length_;
	}

	void calcArea() override;
	void calcCenter() override;

};

