#pragma once
#include <string>
#include <vector>
#include "Edge.h"

class Face
{
protected:
	static long faceNum_;
	const long label_;
	double area_;
	Vertex center_;
	std::vector<Edge> edges_;
	std::vector<Face*> neighbours_;

public:
	//- Constructors
	Face() : label_{faceNum_++}, area_{ 0 } { }
	Face(const Face& f);

	//- Destructor 
	virtual ~Face(){}

	//- Methods

	//- Returns number of faces
	double faceNum() const
	{
		return faceNum_;
	}

	//- Returns face label
	double label() const
	{
		return label_;
	}

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
