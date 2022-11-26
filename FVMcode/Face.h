#pragma once
#include <string>
#include <vector>
#include "Edge.h"

class Face
{
protected:
	static long faceNum_;
	long label_;
	double area_;
	Vertex center_;
	std::vector<Edge> edges_;

public:
	Face() : label_{faceNum_++}, area_ { 0 } { }

	//- Returns area of a face
	double area() const
	{
		return area_;
	}

	//- Returns centroid of a face
	Vertex center() const
	{
		return center_;
	}

	virtual void calcArea() = 0;
	virtual void calcCenter() = 0;
};
