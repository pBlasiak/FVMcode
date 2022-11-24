#pragma once
#include "Face.h"
#include "Edge.h"
#include "Node.h"

class SquareFace : public Face
{
private:
	double length_;
	Node basePoint_;

public:

	//- Assumed that square is parallel to z axis
	//  the two edges are parallel to x and y axes respectively
	SquareFace() : length_{ 1 }, basePoint_{ Node() };
	SquareFace(double l, Node n) : length_{ l }, basePoint_{ n };
};

