#pragma once
#include "Face.h"
#include "Edge.h"
#include "Vertex.h"

class SquareFace : public Face
{
private:
	Vertex basePoint_;
	double length_;

public:

	//- Assumed that square is parallel to z axis
	//  the two edges are parallel to x and y axes respectively.
	//  Default square is of length 1 at (0,0,0)
	SquareFace();
	SquareFace(const Vertex& n, double l);

	// Methods
	Vertex bp()
	{
		return basePoint_;
	}

	double side()
	{
		return length_;
	}

	void calcArea() override;
	void calcCenter() override;

};

